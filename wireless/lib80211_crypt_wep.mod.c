#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xa0fcd1d0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x814e41d8, __VMLINUX_SYMBOL_STR(lib80211_unregister_crypto_ops) },
	{ 0x406762f1, __VMLINUX_SYMBOL_STR(lib80211_register_crypto_ops) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xbc79f606, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xd5a286d8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfe80219e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2d28069, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1a8bafba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc215c1bf, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3b550d6d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4f586997, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa05f372e, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";


MODULE_INFO(srcversion, "6F5520BE587876AEC56AEAC");
