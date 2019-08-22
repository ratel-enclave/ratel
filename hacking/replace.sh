#!/bin/bash

do_replace()
{
	sed -i 's= memcpy(= dynamo_memcpy(=g' $1
	sed -i 's= memset(= dynamo_memset(=g' $1
}

#find . -name "*.h" > files.txt
#find . -name "*.c" >> files.txt


while read f
do
	do_replace $f
done < files.txt

