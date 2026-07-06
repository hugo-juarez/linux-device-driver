#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>


static int __init pcd_driver_init(void)
{

}

static void __exit pcd_driver_cleanup(void)
{

}

module_init(pcd_driver_init);
module_exit(pcd_driver_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hugo J");
MODULE_DESCRIPTION("A pseudo character driver");
MODULE_INFO(board, "Beaglebone black REV A5");