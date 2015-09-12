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
	{ 0x15692c87, "param_ops_int" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x27e1a049, "printk" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x572a0783, "__register_chrdev" },
	{ 0xc5534d64, "ioread16" },
	{ 0xf10de535, "ioread8" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xe484e35f, "ioread32" },
	{ 0x727c4f3, "iowrite8" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "128783BB606195AC0D6F863");
