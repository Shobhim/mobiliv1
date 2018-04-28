#!/bin/bash
echo "cp old modules to a safe place."
cp -r /lib/modules/3.14.33+ /lib/modules/3.14.33+.safe
echo "Command : make mrproper"
make mrproper
echo "Command : make oldconfig"
make oldconfig
echo "Command : rsync -avz ../mobiliv1/mac80211 net/mac80211"
rsync -avz ../mobiliv1/mac80211/ net/mac80211/
echo "Command : rsync -avz ../mobiliv1/wireless net/wireless"
rsync -avz ../mobiliv1/wireless/ net/wireless/
echo "Command : check if rsync was successfull"
cat net/mac80211/tx.c | grep "WIFI MOBILITY"
sleep 5
echo "Command : make clean"
make clean
echo "Command : make -j4 && make -j4 modules_install"
make -j4 && make -j4 modules_install