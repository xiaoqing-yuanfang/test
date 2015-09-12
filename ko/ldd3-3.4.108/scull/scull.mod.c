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
	{ 0x54554948, "kobject_put" },
	{ 0x71ce9e90, "cdev_del" },
	{ 0x7a7d2a48, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xffbf6556, "cdev_init" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x15692c87, "param_ops_int" },
	{ 0xd8e484f0, "register_chrdev_region" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xfb17dec1, "__wake_up_sync" },
	{ 0x1745bf94, "no_llseek" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0x8f52a40d, "kobject_set_name" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0xe865c215, "tty_devnum" },
	{ 0x61279f2f, "nonseekable_open" },
	{ 0xf432dd3d, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xbe23f227, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfc337178, "fasync_helper" },
	{ 0xb4390f9a, "mcount" },
	{ 0x68aca4ad, "down" },
	{ 0x1fe43190, "cdev_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x1000e51, "schedule" },
	{ 0xd24cb2a4, "kmem_cache_alloc_trace" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x71e3cecb, "up" },
	{ 0x208c68e9, "kill_fasync" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x29537c9e, "alloc_chrdev_region" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AA9DA4A942A92622CC84B52");
