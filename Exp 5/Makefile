obj-m = CED18I028Lab5.o
all:
		make -C /lib/modules/$(shell uname -r)/build/ M=$(PWD) modules
clean:
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
