#!/bin/bash
in_filename=$1
out_filename=$2
head -100 ${in_filename} | awk '{print $1 " " $4 " "$5" "$6 " "$9 }' >> ${out_filename}
