#!/bin/bash
in_filename=$1
out_filename=$2
cat ${in_filename} | awk '{print $1 " " $4 " "4" "$6 " "$9 }' >> ${out_filename}
sed -i 's/W/0/g' ${out_filename}
sed -i 's/R/1/g' ${out_filename}

