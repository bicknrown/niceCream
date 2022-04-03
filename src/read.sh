#!/bin/bash

cd /root/fmem/
bash run.sh
dd if=/dev/fmem of=/root/niceCream/dump bs=1M count=256
