#!/bin/bash


collect_source_files()
{
    DIRS="core extra libutil tools"
    IGNORE="(win32)|(aarch64)|(aarchxx)|(arm)"

    echo "" > temp1
    for dir in $DIRS
    do
        find $dir -name "*.[ch]" >> temp1
        find $dir -name "*.asm"  >> temp1
    done

    grep -E -v $IGNORE temp1 > files.txt
    rm temp1
}

gen_tags()
{
    while read f
    do
        if [ -z $f ] ;
        then
            continue
        fi

        ctags -a $f
    done < files.txt
}

collect_source_files
gen_tags
