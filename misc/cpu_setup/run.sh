#!/bin/bash

for i in {1..80}
do
    sudo insmod RDWR_FSGS_base.ko && sudo rmmod RDWR_FSGS_base.ko
    sleep 1s
done
