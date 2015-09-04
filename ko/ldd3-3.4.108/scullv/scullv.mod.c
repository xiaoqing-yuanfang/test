#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbe9aae06, "module_layout" },
	{ 0x71ce9e90, "cdev_del" },
	{ 0x7a7d2a48, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xffbf6556, "cdev_init" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x7ffd58fa, "aio_complete" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x68aca4ad, "down" },
	{ 0x6d269291, "__get_page_tail" },
	{ 0x1fe43190, "cdev_add" },
	{ 0xf1bea6f1, "schedule_delayed_work" },
	{ 0xd24cb2a4, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x71e3cecb, "up" },
	{ 0x1125d3f0, "vmalloc_to_page" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AA04BC4AE130B6354410115");
