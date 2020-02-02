#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bhanu Kiran Chaluvadi");
MODULE_DESCRIPTION("Simple test kernel modules");

int my_init_module(void) {
    printk("in init module \n");
    return 0;
}

void my_cleanup_module(void) {
    printk("in cleanup module \n");
}

// register fucntions
module_init(my_init_module);
module_exit(my_cleanup_module);
