#! /bin/bash

./make-16k u-boot.bin u-boot-16k.bin

sudo dd iflag=dsync oflag=dsync if=u-boot-16k.bin of=/dev/sdb seek=1
sudo dd iflag=dsync oflag=dsync if=u-boot.bin of=/dev/sdb seek=49

