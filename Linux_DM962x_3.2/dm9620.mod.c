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
	{ 0xe68a66b1, "module_layout" },
	{ 0x14a99cd5, "usbnet_resume" },
	{ 0x30a91e8f, "usbnet_suspend" },
	{ 0xccab4cd0, "usbnet_disconnect" },
	{ 0x9e6f2beb, "usbnet_probe" },
	{ 0xb1c1c740, "usbnet_nway_reset" },
	{ 0x35ab7f15, "usbnet_set_msglevel" },
	{ 0x3415acca, "usbnet_get_msglevel" },
	{ 0x8def10a2, "usbnet_set_settings" },
	{ 0xde2c068b, "usbnet_get_settings" },
	{ 0x3b7495a, "usbnet_tx_timeout" },
	{ 0x3f151689, "usbnet_change_mtu" },
	{ 0x73700bbf, "eth_validate_addr" },
	{ 0x4efdfdae, "usbnet_start_xmit" },
	{ 0x335c8cba, "usbnet_stop" },
	{ 0x48902d89, "usbnet_open" },
	{ 0x84396c9, "usb_deregister" },
	{ 0x3a3c672f, "usb_register_driver" },
	{ 0x73d28c61, "mii_nway_restart" },
	{ 0x3b794132, "usbnet_get_endpoints" },
	{ 0xedc95b25, "mii_ethtool_gset" },
	{ 0x30a8ff4f, "mii_check_media" },
	{ 0x2e60bace, "memcpy" },
	{ 0x8dfec41a, "usb_submit_urb" },
	{ 0x2a78b2ca, "kmem_cache_alloc_trace" },
	{ 0xe83ea961, "kmalloc_caches" },
	{ 0xafa7de1a, "usb_alloc_urb" },
	{ 0x13f13805, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x10186dc2, "mutex_lock" },
	{ 0x8b9f6fc2, "usb_control_msg" },
	{ 0x6a29f0e4, "usbnet_defer_kevent" },
	{ 0x8b470500, "netif_carrier_on" },
	{ 0xbf4f2d4f, "netif_carrier_off" },
	{ 0x50eedeb8, "printk" },
	{ 0xa3cca9da, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2cc1eeea, "generic_mii_ioctl" },
	{ 0x19872442, "usbnet_get_drvinfo" },
	{ 0x74214aa6, "mii_link_ok" },
	{ 0xdaa39903, "dev_err" },
	{ 0x90cfb369, "skb_trim" },
	{ 0xac34f61d, "skb_pull" },
	{ 0x3eab0423, "dev_kfree_skb_any" },
	{ 0x52c372ec, "skb_copy_expand" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "577E57065CCDE72AC1109A3");
