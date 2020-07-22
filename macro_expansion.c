
//这里必须要加入该宏所依赖的头文件
#include <linux/module.h>








#define   PRINT_MACRO(x)   "\n######"#x"######\n" 
#define   PRINT_DEF(x)	printk(KERN_INFO"%s\n",PRINT_MACRO(x))

MODULE_LICENSE("GPL");
static int __init macro_expansion_init(void)
{
	//在这里填上你想展开的宏：注意，一定要加参数
	PRINT_DEF((module_param(major, int, 0)));
}


static void __exit macro_expansion_exit(void){	}
module_init(macro_expansion_init);
module_exit(macro_expansion_exit);



