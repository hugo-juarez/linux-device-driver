#include <linux/module.h>
#include <linux/fs.h>
#include <linux/cdev.h>

#define DEV_MEM_SIZE 512

/* pseudo device's memory */
char device_buffer[DEV_MEM_SIZE];

loff_t pcd_lseek (struct file *filp, loff_t off, int whence);
ssize_t pcd_read (struct file *filp, char __user *buff, size_t count, loff_t *f_pos);
ssize_t pcd_write (struct file *filp, const char __user *buff, size_t count, loff_t *f_pos);
int pcd_open (struct inode *inode, struct file *filp);
int pcd_release (struct inode *inode, struct file *filp);

dev_t device_number;

struct cdev pcd_cdev;
struct file_operations pcd_fops = {
    .open = pcd_open,
    .write = pcd_write,
    .read = pcd_read,
    .llseek = pcd_lseek,
    .release = pcd_release,
    .owner = THIS_MODULE
};

static int __init pcd_driver_init(void)
{
    // Dynamically allocate a device number
    alloc_chrdev_region(&device_number, 0, 1, "pcd");

    // Initialize cdev with fops
    cdev_init(&pcd_cdev, &pcd_fops);

    // Register a device (cdev structure) with VFS
    pcd_cdev.owner = THIS_MODULE;
    cdev_add(&pcd_cdev, device_number, 1);

    return 0;
}

static void __exit pcd_driver_cleanup(void)
{

}

loff_t pcd_lseek (struct file *filp, loff_t off, int whence)
{
    return 0;
}
ssize_t pcd_read (struct file *filp, char __user *buff, size_t count, loff_t *f_pos)
{
    return 0;
}
ssize_t pcd_write (struct file *filp, const char __user *buff, size_t count, loff_t *f_pos)
{
    return 0;
}
int pcd_open (struct inode *inode, struct file *filp)
{
    return 0;
}
int pcd_release (struct inode *inode, struct file *filp)
{
    return 0;
}

module_init(pcd_driver_init);
module_exit(pcd_driver_cleanup);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hugo J");
MODULE_DESCRIPTION("A pseudo character driver");
MODULE_INFO(board, "Beaglebone black REV A5");