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
	{ 0x4470a79b, "param_ops_long" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x572a0783, "__register_chrdev" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7c61340c, "__release_region" },
	{ 0xff7559e4, "ioport_resource" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x26576139, "queue_work" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x71e3cecb, "up" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf22449ae, "down_interruptible" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xbe23f227, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xc996d097, "del_timer" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x91715312, "sprintf" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x735a0bd5, "native_io_delay" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8A5661AEB33E02D6030A7DC");
