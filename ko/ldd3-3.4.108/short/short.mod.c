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
	{ 0x801678, "flush_scheduled_work" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xedc03953, "iounmap" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x7c61340c, "__release_region" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x69a358a6, "iomem_resource" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x572a0783, "__register_chrdev" },
	{ 0x1fedf0f4, "__request_region" },
	{ 0xff7559e4, "ioport_resource" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x2072ee9b, "request_threaded_irq" },
	{ 0x27e1a049, "printk" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x735a0bd5, "native_io_delay" },
	{ 0x37a0cba, "kfree" },
	{ 0xf10de535, "ioread8" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xf89843f9, "schedule_work" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x91715312, "sprintf" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1000e51, "schedule" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbe23f227, "current_task" },
	{ 0x727c4f3, "iowrite8" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "03D399C71090B85E6BC79E6");
