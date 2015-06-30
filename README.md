# davicom-semiconductor-dm9621-for-ubuntu-1204
Driver of davicom-semiconductor-dm9621 usb net interface.

Try it and enjoy it. There is no warrant about this driver. Please feel free to contact me <xwhuang123@gmail.com>

Usage:

1. download the source code

2. change directory to Linux_DM962x_3.2
> cd Linux_DM962x_3.2

4. build .ko
> make

5. copy dm9620.ko to your system, replace 3.2.0-24-generic with `uname -r` in your system.
> sudo cp dm9620.ko /lib/modules/3.2.0-24-generic/kernel/drivers/net/usb

6. load usbnet by modprobe 
> sudo modprobe usbnet

7. load dm9620.ko
> sudo insmod dm9620.ko

Reference: http://www.ubuntu-tw.org/modules/newbb/viewtopic.php?topic_id=51040
