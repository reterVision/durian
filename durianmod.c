// Durian driver for linux 2.6


#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init durian_init(void)
{
	printk("<1>Hi, you want some durian? From kernel space...\n");
	return 0;
}

static void __exit durian_cleanup(void)
{
	printk("<1>Nice durian huh? See you next time! Leaving kernel space.\n");
}

module_init(durian_init);
module_exit(durian_cleanup);
