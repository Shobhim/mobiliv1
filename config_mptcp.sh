sysctl -w net.mptcp.mptcp_enabled=1
sysctl -w net.mptcp.mptcp_checksum=1
sysctl -w net.mptcp.mptcp_syn_retries=3
# sysctl net.ipv4.tcp_congestion_control=
sysctl -w net.mptcp.mptcp_path_manager=default
sysctl -w net.mptcp.mptcp_scheduler=default