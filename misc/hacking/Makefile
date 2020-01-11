obj-m = st_size.o
all:
	python st_size.py > st_size.c
	make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
	sudo insmod st_size.ko
	dmesg | tail -n 100 | awk -F"#" '{print "#" $$2}' > size.c
	sudo rmmod st_size.ko
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
