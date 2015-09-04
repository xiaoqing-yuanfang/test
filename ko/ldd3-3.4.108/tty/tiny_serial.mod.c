#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbe9aae06, "module_layout" },
	{ 0xbaeeb492, "uart_unregister_driver" },
	{ 0xd7d8e5, "uart_add_one_port" },
	{ 0x80ec3a4c, "uart_register_driver" },
	{ 0x67ffbec6, "uart_write_wakeup" },
	{ 0x92670a1a, "tty_flip_buffer_push" },
	{ 0xaf737bfd, "tty_insert_flip_string_flags" },
	{ 0xd24cb2a4, "kmem_cache_alloc_trace" },
	{ 0x7a7d2a48, "kmalloc_caches" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0xc996d097, "del_timer" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xbc95ffb4, "uart_get_divisor" },
	{ 0xd1884dcf, "uart_get_baud_rate" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5594905F8D227BE2E2C5473");
