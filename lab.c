#include <linux/init.h>
#include <linux/module.h>
#include <linux/sched.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bhanu Kiran Chaluvadi");
MODULE_DESCRIPTION("Simple test kernel modules");

static int number = 99;
static char* word = "universal";

module_param(number, int, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
MODULE_PARM_DESC(number, "A interger");
module_param(word, charp, 0000);
MODULE_PARM_DESC(word, "A character string");

int my_init_module(void) {
    printk("in init module \n");
    printk(KERN_INFO "Number: %d\n", number);
    printk(KERN_INFO "Word string: %s\n", word);
    return 0;
}

void my_cleanup_module(void) {
    printk("in cleanup module \n");
}

// register fucntions
module_init(my_init_module);
module_exit(my_cleanup_module);
