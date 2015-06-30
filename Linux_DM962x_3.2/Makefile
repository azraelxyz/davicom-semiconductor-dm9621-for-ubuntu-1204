##================================================================
##     Davicom Semiconductor Inc.  	For DM9620 V0.00
##   --------------------------------------------------------
## Description:
##              Compile driver dm9620.c to dm9620.ko
##
## Modification List:
## 09/05/2000	Fixed SMPFALGS wrong on smp & smp_mod
## 08/02/2000	Changed some description string & include file path
## 07/25/2000	Append smp_mod and changed some descriptions
## 01/25/2000	by Sten Wang
## 03/24/2009   Modifiy for Linux kernel 2.6.28
##================================================================
# Comment/uncomment the following line to disable/enable debugging
# DEBUG = y

# Add your debugging flag (or not) to CFLAGS
#ifeq ($(DEBUG),y)
#  DEBFLAGS = -O -g # "-O" is needed to expand inlines
#else
#  DEBFLAGS = -O2
#endif

#CFLAGS += $(DEBFLAGS) -I$(LDDINCDIR)

#ifneq ($(KERNELRELEASE),)
# call from kernel build system

obj-m	:= dm9620.o

#else
MODULE_INSTALDIR ?= /lib/modules/$(shell uname -r)/kernel/drivers/net/usb
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD       := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD)  

#endif



clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions

install:
	#modprobe -r dm9620
	install -c -m 0644 dm9620.ko $(MODULE_INSTALDIR)
	depmod -a -e

#depend .depend dep:
#	$(CC) $(CFLAGS) -M *.c > .depend


#ifeq (.depend,$(wildcard .depend))
#include .depend
#endif
