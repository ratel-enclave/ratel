/*
 * As the current Linux versions do NOT allow using the FSGSBASE instruction from 
 * userland, we install this module to enable this instruction which would be used 
 * within Enclaves from userspace. In the future, if the support for it is added
 * to Linux, this driver won't be necessary.
 */

#include <asm/tlbflush.h>
#include <linux/fs.h>
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/module.h>
#include <linux/miscdevice.h>

#define DRV_DESCRIPTION "Ratel SGX Driver"
#define DRV_VERSION     "0.10"

#define RSGX_FILE  "/dev/rsgx"
#define RSGX_MINOR MISC_DYNAMIC_MINOR

MODULE_DESCRIPTION(DRV_DESCRIPTION);
MODULE_AUTHOR("Ratel <ratel.enclave@gmail.com>");
MODULE_VERSION(DRV_VERSION);

static void __enable_fsgsbase(void* v) {
#if LINUX_VERSION_CODE < KERNEL_VERSION(4, 0, 0)
    write_cr4(read_cr4() | X86_CR4_FSGSBASE);
#else
    cr4_set_bits(X86_CR4_FSGSBASE);
    __write_cr4(__read_cr4() | X86_CR4_FSGSBASE);
#endif
}

static void __disable_fsgsbase(void* v) {
#if LINUX_VERSION_CODE < KERNEL_VERSION(4, 0, 0)
    write_cr4(read_cr4() & ~X86_CR4_FSGSBASE);
#else
    cr4_clear_bits(X86_CR4_FSGSBASE);
    __write_cr4(__read_cr4() & ~X86_CR4_FSGSBASE);
#endif
}

static const struct file_operations rsgx_fops = {
    .owner = THIS_MODULE
};

static struct miscdevice rsgx_dev = {
    .minor = RSGX_MINOR,
    .name  = "rsgx",
    .fops  = &rsgx_fops,
    .mode  = S_IRUGO | S_IWUGO,
};

static int rsgx_setup(void) {
    int ret;

    ret = misc_register(&rsgx_dev);
    if (ret) {
        pr_err("misc_register() failed\n");
        return ret;
    }

    on_each_cpu(__enable_fsgsbase, NULL, 1);

    return 0;
}

static void rsgx_cleanup(void) {
    on_each_cpu(__disable_fsgsbase, NULL, 1);

    if (rsgx_dev.this_device)
        misc_deregister(&rsgx_dev);
}

static int __init rsgx_init(void) {
    int ret;

    pr_info(DRV_DESCRIPTION " v" DRV_VERSION "\n");

    if (!boot_cpu_has(X86_FEATURE_FSGSBASE)) {
        pr_err("FSGSBASE feature required by Ratel is NOT supported by the CPU!\n");
        return -ENODEV;
    }

    ret = rsgx_setup();
    if (ret) {
        rsgx_cleanup();
        return ret;
    }

    return 0;
}

static void __exit rsgx_exit(void) {
    rsgx_cleanup();
}

module_init(rsgx_init);
module_exit(rsgx_exit);
MODULE_LICENSE("GPL");
