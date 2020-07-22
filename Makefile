#########################################
#1.在macro_expansion.c里面包含内核头文件，设置需要打印出来的宏
#2.执行make showmacro
#########################################

#内核根目录
KERN_DIR := 

obj-m := macro_expansion.o

showmacro : macro_expansion.o
	clear
	@grep -a "^#\{5\}.*#\{5\}$$" macro_expansion.o
	
macro_expansion.o : macro_expansion.c
	make -C $(KERN_DIR) M=`pwd`  modules V=0 






