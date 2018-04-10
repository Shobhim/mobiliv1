if_array=$(iw dev | awk '$1=="Interface"{print $2}');

counter=1;

for interface in ${if_array[@]};
do
	# echo $counter;
	exist=`ip route show table $counter | wc -l`;
	# echo $exist;
	if [ $exist -gt 0 ]
		then
		# echo "Exists...deleting";
		ip rule del table $counter;
		ip route flush table $counter;
	fi
	# echo $interface;
	ip_addr=$(ip -f inet addr show $interface | grep -Po 'inet \K[\d.]+');
	echo $ip_addr;
	addr_space=$(ip route | grep $ip_addr | awk '{print $1;}');
	# echo $addr_space;
	gateway=$(echo $addr_space | awk 'BEGIN{FS="."; OFS="."}{print $1,$2,$3,1}');
	# echo $gateway;

	ip rule add from $ip_addr table $counter
	ip route add $addr_space dev $interface scope link table $counter
	ip route add default via $gateway dev $interface table $counter

	counter=$(($counter + 1));
done