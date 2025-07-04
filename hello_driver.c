#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dal");
MODULE_DESCRIPTION("Simple Hello World Driver");
MODULE_VERSION("1.0");

static int __init hello_init(void)
{
  printk(KERN_INFO "Hello World driver loaded!\n");
  return 0;
}

static void __exit hello_exit(void)
{
  printk(KERN_INFO "Goodbye Hello World driver unloaded!\n");
}

module_init(hello_init);
module_exit(hello_exit);
