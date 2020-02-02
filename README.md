# simple_kernel_module
A simplest kernel module

## cd to current directory where lab.c present.
cd <current_dir>

## create a make file - if it's not present
echo obj-m := lab.o > Makefile

## compile
make -C /lib/modules/$(uname -r)/build M=$PWD modules

## load module
sudo insmod lab.ko

## check if module is loaded
lsmod | head

dmesg | tail

cat /var/log/kern.log | tail

## unload module
sudo rmmod lab 

## check if module is unloaded
lsmod | head 

dmesg | tail

cat /var/log/kern.log | tail

