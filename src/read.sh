#!/bin/bash

cd /root/fmem/
bash run.sh
dd if=/dev/fmem of=/root/niceCream/dump count=256000000
