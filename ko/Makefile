obj-m := test.o

kernel_path:=/lib/modules/$(shell uname -r)/build/
all:
	    make -C $(kernel_path)  M=$(PWD) modules
clean:
	    make -C $(kernel_path)  M=$(PWD) clean
