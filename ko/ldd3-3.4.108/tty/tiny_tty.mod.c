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
	{ 0xe3f71cf3, "single_release" },
	{ 0xba38c0c4, "seq_read" },
	{ 0x8fe7859d, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afed5, "tty_unregister_driver" },
	{ 0xd9ec366c, "tty_unregister_device" },
	{ 0xd62b654d, "tty_register_device" },
	{ 0xb2f8cc58, "put_tty_driver" },
	{ 0x315d2748, "tty_register_driver" },
	{ 0x442baa39, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x8c3a6ddd, "__alloc_tty_driver" },
	{ 0xb5dcab5b, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x5860aad4, "add_wait_queue" },
	{ 0xbe23f227, "current_task" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x92670a1a, "tty_flip_buffer_push" },
	{ 0xaf737bfd, "tty_insert_flip_string_flags" },
	{ 0x693e8b03, "tty_buffer_request_room" },
	{ 0xd24cb2a4, "kmem_cache_alloc_trace" },
	{ 0x7a7d2a48, "kmalloc_caches" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc996d097, "del_timer" },
	{ 0x71e3cecb, "up" },
	{ 0x68aca4ad, "down" },
	{ 0xf1e8de09, "tty_get_baud_rate" },
	{ 0x27e1a049, "printk" },
	{ 0x789bdca3, "seq_printf" },
	{ 0x524497a6, "single_open" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "72BD763F92D2DFEC6E6668A");
