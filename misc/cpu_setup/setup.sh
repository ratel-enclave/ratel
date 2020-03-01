#!/bin/bash

OPTION1="install"
OPTION2="clean"

if [ "$OPTION1" == "$1" ]; then
	sudo rmmod RDWR_FSGS_base  # previously named `RDWR_FSGS_base`
	sudo rmmod rsgx
	make
	sudo insmod rsgx.ko
	echo "Install finished"
	exit
fi

if [ "$OPTION2" == "$1" ]; then
	sudo rmmod RDWR_FSGS_base  # previously named `RDWR_FSGS_base`
	sudo rmmod rsgx
	make clean

	echo "Cleanup finished"
	exit
fi

echo "please type the right parameter to do the setup!"
echo "$0 [option]";
echo "		install		to compile and install the driver module;";
echo "		clean		to clean all generated files and remove the module installed.";
exit;
