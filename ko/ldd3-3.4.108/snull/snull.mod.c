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
	{ 0xaed6fe20, "register_netdev" },
	{ 0x92d86460, "alloc_netdev_mqs" },
	{ 0xb30b47a4, "free_netdev" },
	{ 0x18af3ff1, "unregister_netdev" },
	{ 0xf0213b11, "netif_rx" },
	{ 0xbad2679b, "napi_complete" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x5516f735, "dev_alloc_skb" },
	{ 0x2f851f3d, "netif_receive_skb" },
	{ 0xa255534, "eth_type_trans" },
	{ 0x24f350e4, "skb_put" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x36ab666d, "netif_napi_add" },
	{ 0x462952ec, "ether_setup" },
	{ 0x7a7d2a48, "kmalloc_caches" },
	{ 0xd24cb2a4, "kmem_cache_alloc_trace" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x5073b430, "__netif_schedule" },
	{ 0xbe733dc0, "consume_skb" },
	{ 0xe7eafd7d, "__napi_schedule" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x5d9a14a8, "skb_push" },
	{ 0x69acdf38, "memcpy" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1A1271C5DFBFB2AEA1ADF15");
