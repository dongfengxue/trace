#! /bin/bash
filename=$(ls webmail.*)
for i in $filename
do
	echo $i
	sed -i 's/W/0/g' $i
	sed -i 's/R/1/g' $i
done

