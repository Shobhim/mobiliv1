#!/bin/bash

echo "Command : cp old vmLinuz to backup"
cp /boot/vmlinuz-3.14.33+ /boot/backup/

echo "Command : cp new bzImage to boot"
cp arch/x86_64/boot/bzImage /boot

echo "Command : cp old System.map to backup"
cp /boot/System.map-3.14.33+ /boot/backup

echo "Command : cp new System.map to boot"
cp System.map /boot/System.map-3.14.33+

echo "Command : cp old config to backup"
cp /boot/config-3.14.33+ /boot/backup

echo "Command : cp new config to boot"
cp .config /boot/config-3.14.33+

echo "Command : moving to /boot"
cd /boot

echo "Command : Creating initramfs"
update-initramfs -c -k 3.14.33+

echo "Command : updating grub file"
grub-mkconfig -o grub/grub.cfg