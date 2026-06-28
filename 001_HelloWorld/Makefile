obj-m := main.o

ARCH=arm
CROSS_COMPILE=/buildroot/output/host/bin/arm-buildroot-linux-gnueabihf-
KERN_DIR=/buildroot/output/build/linux-custom

all:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) modules
clean:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) clean
help:
	make ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KERN_DIR) M=$(PWD) help