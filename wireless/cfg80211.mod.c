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
	{ 0x5358fc36, __VMLINUX_SYMBOL_STR(ring_buffer_discard_commit) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfe80219e, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xccbd1dc3, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0x969cc1ca, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x92beccbf, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xa4ada02f, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x43489b13, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc60a57c8, __VMLINUX_SYMBOL_STR(dev_change_net_namespace) },
	{ 0xa77eeae9, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x333cab9, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xdd6a42b6, __VMLINUX_SYMBOL_STR(event_triggers_post_call) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x8e607d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x728c8eeb, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0x98dc0dcb, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x800ddc2c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe26220bb, __VMLINUX_SYMBOL_STR(debugfs_rename) },
	{ 0x8b475900, __VMLINUX_SYMBOL_STR(get_net_ns_by_pid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcadc9cab, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xa3386b56, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x3b550d6d, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2e750d50, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x84841d14, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xe08c7aa3, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0x82eda6be, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xbd7e37c8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xe3878542, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x758363dd, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x648e1819, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2aba8727, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb3dff9a0, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x943699b2, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xe620da2c, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x195ce25b, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xd250a6c, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1a8bafba, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa56b425d, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb9570077, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xad741915, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x10c97491, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x91e7fb8b, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xa724257f, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0x3939f8f0, __VMLINUX_SYMBOL_STR(rfkill_pause_polling) },
	{ 0x92ceff6, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x68527a04, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x4f586997, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xabeb33f6, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x4571616b, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x9549bd73, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x46be5210, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x5918d06e, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0x91be8198, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xc781bd9f, __VMLINUX_SYMBOL_STR(rfkill_resume_polling) },
	{ 0xed6c3b32, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x5b0cfc8, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x4db96ebd, __VMLINUX_SYMBOL_STR(net_ns_type_operations) },
	{ 0x297fe620, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x43d610de, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2525e456, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x891681a8, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb1434ca3, __VMLINUX_SYMBOL_STR(device_rename) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xaef462bc, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd5a286d8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7fa0fa76, __VMLINUX_SYMBOL_STR(netdev_set_default_ethtool_ops) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x452e7858, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xa94e5b87, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85bda4e3, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x5902911d, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x222ffdbb, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xe6602e9f, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xaf35b68f, __VMLINUX_SYMBOL_STR(filter_check_discard) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x4edbc1c2, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x98ea9ff8, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x2d28069, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xb8de3d8d, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x920f9de0, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0xb8b926e8, __VMLINUX_SYMBOL_STR(__sock_create) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xa7f92105, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "07F3621B1599A8AFE69A773");
