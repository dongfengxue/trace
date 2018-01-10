#!/bin/bash
filelist=$(ls *.blkparse)
for i in $filelist
do
	echo $i
	out=${i#*.}
	cat $i | awk '{print $1 " "$4" "4" "$6" "$9}' >> ${out}.homes
done
