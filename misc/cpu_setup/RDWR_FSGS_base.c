#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int init_module(void)
{
    volatile unsigned long cr4;


    /*unsigned long u = native_read_cr4();*/
    asm volatile("mov %%cr4,%0\n\t" : "=r" (cr4), "=m" (__force_order));
    printk(KERN_INFO "CR4: 0x%lx\n", cr4);

    cr4 |= 0x10000;
    asm volatile("mov %0,%%cr4\n\t" :: "rm" (cr4));

    //Read CR4 again
    asm volatile("mov %%cr4,%0\n\t" : "=r" (cr4), "=m" (__force_order));
    printk(KERN_INFO "CR4: 0x%lx\n", cr4);

    unsigned long fsbase;

    asm volatile ( "rdfsbase %0" : "=rm" (fsbase));
    printk(KERN_INFO "FSBASE: 0x%lx\n", fsbase);

    //Test the useability of wrfsbase
    asm volatile ( "wrfsbase %0" :: "rm" (fsbase));

    return 0;
}


void cleanup_module(void)
{
}


