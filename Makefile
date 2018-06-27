PWD = $(shell pwd)

obj-m += kmod_header.o

all:
	$(MAKE) -C $(LINUX_DIR) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) CONFIG_DEBUG_INFO=y SUBDIRS=$(PWD) modules
