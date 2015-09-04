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
	{ 0x37a0cba, "kfree" },
	{ 0x54554948, "kobject_put" },
	{ 0xa9ff0359, "put_disk" },
	{ 0xb8703902, "del_gendisk" },
	{ 0x1fed969b, "blk_cleanup_queue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x999e8297, "vfree" },
	{ 0xfc0a7369, "add_disk" },
	{ 0x28318305, "snprintf" },
	{ 0x887a9d8e, "alloc_disk" },
	{ 0xd101ade7, "blk_queue_logical_block_size" },
	{ 0x41cbe796, "blk_init_queue" },
	{ 0x1cedebf6, "blk_queue_make_request" },
	{ 0x56130fd, "blk_alloc_queue" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3006a13a, "__blk_end_request" },
	{ 0x6189da0a, "bio_endio" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x43ac7241, "blk_fetch_request" },
	{ 0x7b5afc54, "__blk_end_request_cur" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb476c211, "check_disk_change" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x27e1a049, "printk" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xfb578fc5, "memset" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "38B03FC8C9D1D61FA0ACF41");
