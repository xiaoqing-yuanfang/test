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
	{ 0xba6b6848, "pci_unregister_driver" },
	{ 0xecc819ca, "__pci_register_driver" },
	{ 0x3ac25379, "pci_bus_read_config_byte" },
	{ 0x524656f5, "pci_enable_device" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CAC3D9B11F72FCED5E41787");
