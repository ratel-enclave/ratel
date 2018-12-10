#!/bin/bash

INPUT=$1
OUTPUT=${INPUT%.*}.tag.txt

grep start_pc ${INPUT} | awk -F":dispatch:" '{print $2}' | sed 's%"%%g' | awk -F"->" '{print $1}' > ${OUTPUT}


