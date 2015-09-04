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
	{ 0x39fcf000, "seq_release" },
	{ 0xba38c0c4, "seq_read" },
	{ 0x8fe7859d, "seq_lseek" },
	{ 0x7a574c31, "remove_proc_entry" },
	{ 0x5801579c, "create_proc_entry" },
	{ 0xd24cb2a4, "kmem_cache_alloc_trace" },
	{ 0x7a7d2a48, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x789bdca3, "seq_printf" },
	{ 0x3ac97285, "seq_open" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BCEFFA8CB4F6FFCC551CD45");
