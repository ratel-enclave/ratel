obj-m += rsgx.o

all:
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules

clean:
	$(RM) -r *.o *.ko *.order *.symvers *.mod.c .tmp_versions .*o.cmd .cache.mk *.o.ur-safe

