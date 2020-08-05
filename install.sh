#!/bin/bash

select_install_path()
{
    USER_INPUT_PATH=$(pwd)
    echo
    echo -n "Do you want to download and install "$1" in current directory? [yes/no] : "
    read ANSWER

    if [ "$ANSWER" == "yes" ]; then
        if [ ! -d "$USER_INPUT_PATH" ] || [ ! -w "$USER_INPUT_PATH" ]; then
            echo "Can not install in $USER_INPUT_PATH, please check the permission!"
            exit 4
        fi
    else
        echo
        echo -n "Please input the directory which you want to download and install in : "
        read USER_INPUT_PATH

        eval USER_INPUT_PATH="$USER_INPUT_PATH"

        if [ -d "$USER_INPUT_PATH" ]; then
            if [ ! -w "$USER_INPUT_PATH" ]; then
                echo "Can not install in $USER_INPUT_PATH, please check the permission!"
                exit 4
            fi
        else
            mkdir -p "$USER_INPUT_PATH"
            if [ "$?" != "0" ]; then
                echo "Can not install in $USER_INPUT_PATH, please check the permission!"
                exit 4
            fi
        fi
    fi
}

install_sgx_driver()
{

	select_install_path "Intel SGX driver"

	USER_INPUT_PATH=$(cd "$USER_INPUT_PATH"; pwd -P)

	git clone https://github.com/ratel-enclave/ratel-driver.git $USER_INPUT_PATH
	cd $USER_INPUT_PATH

	make -s

	sudo mkdir -p "/lib/modules/"`uname -r`"/kernel/drivers/intel/sgx"    
	sudo cp isgx.ko "/lib/modules/"`uname -r`"/kernel/drivers/intel/sgx"    
	sudo sh -c "cat /etc/modules | grep -Fxq isgx || echo isgx >> /etc/modules"    
	sudo /sbin/depmod
	sudo /sbin/modprobe isgx

}

install_sgx_sdk()
{

	select_install_path "Intel SGX SDK"

	USER_INPUT_PATH=$(cd "$USER_INPUT_PATH"; pwd -P)

	git clone https://github.com/ratel-enclave/ratel-sdk.git $USER_INPUT_PATH

	cd $USER_INPUT_PATH

	sudo apt-get install build-essential ocaml automake autoconf libtool wget python libssl-dev git cmake perl

	./download_prebuilt.sh > /dev/null

	make -s

	make -s sdk_install_pkg

	sudo ./linux/installer/bin/sgx_linux_x64_sdk_2.1.42002.bin --prefix=/opt/intel/

	source /opt/intel/sgxsdk/environment

}

install_sgx_psw()
{
	select_install_path "Intel SGX PSW"

	USER_INPUT_PATH=$(cd "$USER_INPUT_PATH"; pwd -P)

	git clone https://github.com/ratel-enclave/ratel-psw.git $USER_INPUT_PATH

	cd $USER_INPUT_PATH

	sudo apt-get install libssl-dev libcurl4-openssl-dev protobuf-compiler libprotobuf-dev

	./download_prebuilt.sh

	make -s

	make psw_install_pkg

	sudo ./linux/installer/bin/sgx_linux_x64_psw_2.1.42002.bin

}

install_ratel()
{
	select_install_path "RATEL"

	USER_INPUT_PATH=$(cd "$USER_INPUT_PATH"; pwd -P)
	git clone https://github.com/ratel-enclave/ratel.git $USER_INPUT_PATH

	cd $USER_INPUT_PATH

	make -s


	sudo touch /etc/sysctl.d/01-disable-aslr.conf
	sudo chmod 666 /etc/sysctl.d/01-disable-aslr.conf
	sudo  echo "kernel.randomize_va_space = 0" > /etc/sysctl.d/01-disable-aslr.conf
}

install_sgx_driver;
install_sgx_sdk;
install_sgx_psw;
install_ratel;
