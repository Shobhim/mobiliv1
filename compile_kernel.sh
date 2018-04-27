make mrproper
make oldconfig
rsync -avz ../mobiliv1/mac80211 net/mac80211
rsync -avz ../mobiliv1/wireless net/wireless
make clean
make -j4 && make -j4 modules_install