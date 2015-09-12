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
	{ 0x7a574c31, "remove_proc_entry" },
	{ 0x5801579c, "create_proc_entry" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf89843f9, "schedule_work" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xf1bea6f1, "schedule_delayed_work" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xd2f1b260, "interruptible_sleep_on" },
	{ 0xbe2c0274, "add_timer" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x91715312, "sprintf" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0xbe23f227, "current_task" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x7d11c268, "jiffies" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5C75819BD6C8DEFCB3DA75B");
