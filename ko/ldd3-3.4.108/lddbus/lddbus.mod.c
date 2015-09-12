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
	{ 0xd54b206, "driver_register" },
	{ 0x6650cd61, "__bus_register" },
	{ 0x754d539c, "strlen" },
	{ 0x91715312, "sprintf" },
	{ 0x7605a531, "device_register" },
	{ 0x27e1a049, "printk" },
	{ 0x18f6178a, "driver_unregister" },
	{ 0xb4390f9a, "mcount" },
	{ 0x5a921311, "strncmp" },
	{ 0xc481e348, "bus_unregister" },
	{ 0x36a9d18e, "driver_create_file" },
	{ 0x77f300b6, "bus_create_file" },
	{ 0xd38e40f1, "device_unregister" },
	{ 0x28318305, "snprintf" },
	{ 0xe81cd1cb, "dev_set_name" },
	{ 0xa7f92105, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "526B0ECB29626E780927D9D");
