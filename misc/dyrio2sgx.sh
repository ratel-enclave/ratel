#!/bin/bash

#We need the host program *drrun* and the core *libdynamorio.so* of dynamorio.
#So we use this script to extract related source files including those dynamically 
#generated files from dynamorio-repo, and put them into a specific directory.
#Please put this script in the root directory of dynamorio-repo, and assign OLD_DR_ROOT, 
#NEW_DR_ROOT, OLD_BIN_DIR and NEW_BIN_DIR with corresponding values, repectively.
#Please rewrite this script to make it elegant! Thanks.

do_help()
{
    echo $0 "make_targets"
    echo "e.g. $0 drrun dynamorio"
}

do_test()
{
    OLD_DR_ROOT="/home/yph/project/sgx/dynamorio"
    OLD_BLD_DIR="/home/yph/project/sgx/dynamorio/debug"
    NEW_DR_ROOT=${OLD_DR_ROOT}
    NEW_BLD_DIR=${OLD_BLD_DIR}

    echo "[  0%] Generating ../event_strings.h" > test.log
    echo "cd /home/yph/project/sgx/dynamorio/debug/core && /usr/bin/perl /home/yph/project/sgx/dynamorio/core/gen_event_strings.pl /home/yph/project/sgx/dynamorio/core/win32/events.mc /home/yph/project/sgx/dynamorio/debug/event_strings.h" >> test.log
    gen_makebash test.log ${OLD_DR_ROOT} ${NEW_DR_ROOT} ${OLD_BLD_DIR} ${NEW_BLD_DIR}
}

#gen_makebash [make.log old_dr_root new_dr_root old_bin_dir new_bld_dir]
gen_makebash()
{
    #Usage
    if [ $# -ne 5 ] ;
    then
        echo "gen_makebash [make.log new_dr_root old_bin_dir new_bld_dir]"
        exit
    fi

    #update default parameters
    LOG=$1
    OLD_DR_ROOT=$2
    NEW_DR_ROOT=$3
    OLD_BLD_DIR=$4
    NEW_BLD_DIR=$5

    CMAKE="/usr/bin/cmake"
    PERL="/usr/bin/perl"
    CPP="/usr/bin/cpp"
    CC="/usr/bin/cc"
    AS="/usr/bin/as"

    #generate a shell script from the log
    grep -E "(^cd )|(^\[[0-9 ]*%\])" $LOG > make.sh
    sed -i -E "s=(^\[[0-9 ]*%\])=#\1="  make.sh
    sed -i "s=$OLD_BLD_DIR=\${BLD_DIR}=g"  make.sh
    sed -i "s=$OLD_DR_ROOT=\${DR_ROOT}=g"  make.sh
    sed -i "s=$CMAKE=\${CMAKE}="  make.sh
    sed -i "s=$PERL=\${PERL}="  make.sh
    sed -i "s=$CPP=\${CPP}="  make.sh
    sed -i "s=$CC=\${CC}="  make.sh
    sed -i "s=$AS=\${AS}="  make.sh

    if [ ${OLD_DR_ROOT} != ${NEW_DR_ROOT} ] ;
    then
        sed -i "/cmake_depends/s=^=#="  make.sh
        sed -i "/DCPP2ASM/s=^=#="  make.sh
        sed -i "/Dfile/s=^=#="  make.sh
        sed -i "/PERL/s=^=#="  make.sh
        sed -i "/\${CMAKE} -P/s=^=#="  make.sh
        sed -i "/outfile=/s=^=#="  make.sh
        #sed -i "/CMake_readelf/s=^=#="  make.sh
        #sed -i "/cmake_link_script/s=BLD_DIR=OLD_BLD_DIR=g"  make.sh

    fi

    #add definitions of global variables to the shell script
    echo "BLD_DIR=\"${NEW_BLD_DIR}\"" >  temp.mk
    echo "DR_ROOT=\"${NEW_DR_ROOT}\"" >> temp.mk
    #echo "OLD_BLD_DIR=\"${OLD_BLD_DIR}\"" >>  temp.mk

    echo '
CMAKE="/usr/bin/cmake"
PERL="/usr/bin/perl"
CPP="/usr/bin/cpp"
CC="/usr/bin/cc"
AS="/usr/bin/as"' >> temp.mk

    cat make.sh >> temp.mk
    mv temp.mk make.sh
    mv -u make.sh ${NEW_DR_ROOT} 2>/dev/null
}


#collect_src_files make.log old_dr_root new_dr_root old_bld_dir new_bld_dir
collect_src_files()
{
#cd ${BLD_DIR}/libutil && ${CC}  -DNOT_DYNAMORIO_CORE_PROPER -I${DR_ROOT}/core/unix -I${BLD_DIR} -I${DR_ROOT}/core/arch/x86 -I${DR_ROOT}/core/arch -I${DR_ROOT}/core/win32 -I${DR_ROOT}/core/lib -I${DR_ROOT}/core  -m64  -fno-strict-aliasing -fno-stack-protector -fvisibility=internal  -std=gnu99 -g3 -fno-omit-frame-pointer -fno-builtin-strcmp -Wall -Werror -Wwrite-strings -Wno-unused-but-set-variable     -o CMakeFiles/drfrontendlib.dir/__/core/unix/os.c.o   -c ${DR_ROOT}/core/unix/os.c

#cd ${BLD_DIR}/core && ${CPP}  -g   -fPIC -I${DR_ROOT}/core/arch/x86 -I${DR_ROOT}/core/unix -I${DR_ROOT}/core/arch -I${DR_ROOT}/core/lib -I${BLD_DIR} -I${BLD_DIR}/include/annotations   -DCPP2ASM -E ${DR_ROOT}/core/arch/asm_shared.asm -o CMakeFiles/drhelper.dir/arch/asm_shared.asm.o.s

    #Usage
    if [ $# -ne 5 ] ;
    then
        echo "collect_src_files make.log old_dr_root new_dr_root old_bld_dir new_bld_dir"
        exit
    fi

    #upate default variables
    MKF=$1
    OLD_DR_ROOT=$2
    NEW_DR_ROOT=$3
    OLD_BLD_DIR=$4
    NEW_BLD_DIR=$5


    #extract source files
    #${CC} -c ...*.c
    awk -F" -c " '{print $2}' $MKF | sort | uniq > files.txt
    #Dynamically generated ASM files
    grep "DCPP2ASM" $MKF | awk -F" -o " '{print "\${BLD_DIR}/core/" $2}' >> files.txt 2>/dev/null
    #link.txt
    grep "cmake_link_script" $MKF | grep "^cd " | grep "&&" > delme
    awk -F" && " '{print $1}' delme  > _cd.txt
    awk -F"cmake_link_script " '{print $2}' delme | awk '{print $1}' > _link.txt
    paste -d "/" _cd.txt _link.txt > _all.txt
    sed -i 's/^cd //' _all.txt
    cat _all.txt >> files.txt
    rm _cd.txt _link.txt
    #outfile=${BLD_DIR}/core/dynamorio.ldscript
    grep " outfile=" $MKF > delme
    awk -F" outfile=" '{print $2}' delme | awk '{print $1}' > _outfile.txt
    cat _outfile.txt >> files.txt
    rm _outfile.txt
    #CMake_readelf
    grep "CMake_readelf.cmake" $MKF > delme
    awk -F" -P " '{print $2}' delme | awk '{print $1}' > _readelf.txt
    cat _readelf.txt >> files.txt
    rm _readelf.txt

    grep "\${BLD_DIR}" files.txt | sed "s=\${BLD_DIR}/==" > delme
    echo "CMakeCache.txt" >> delme
    while read f
    do
        if [ -z $f ]
        then
            continue
        fi

        dname=${NEW_BLD_DIR}/`dirname $f`
        if [ ! -d $dname ]
        then
            mkdir -p $dname
        fi

        cp ${OLD_BLD_DIR}/$f $dname
    done < delme
    sed -i "s=${OLD_DR_ROOT}=${NEW_DR_ROOT}=g" ${NEW_BLD_DIR}/CMakeCache.txt

    grep "\${DR_ROOT}" files.txt | sed "s=\${DR_ROOT}/==" > delme
    echo "core/unix/os_asm_defines.asm" >> delme
    while read f
    do
        if [ -z $f ]
        then
            continue
        fi

        dname=${NEW_DR_ROOT}/`dirname $f`
        if [ ! -d $dname ]
        then
            mkdir -p $dname
        fi

        cp ${OLD_DR_ROOT}/$f $dname
    done < delme

    rm delme
}

#collect_head_files make.log old_dr_root new_dr_root old_bld_dir new_bld_dir
collect_head_files()
{
#cd ${BLD_DIR}/libutil && ${CC}  -DNOT_DYNAMORIO_CORE_PROPER -I${DR_ROOT}/core/unix -I${BLD_DIR} -I${DR_ROOT}/core/arch/x86 -I${DR_ROOT}/core/arch -I${DR_ROOT}/core/win32 -I${DR_ROOT}/core/lib -I${DR_ROOT}/core  -m64  -fno-strict-aliasing -fno-stack-protector -fvisibility=internal  -std=gnu99 -g3 -fno-omit-frame-pointer -fno-builtin-strcmp -Wall -Werror -Wwrite-strings -Wno-unused-but-set-variable     -o CMakeFiles/drfrontendlib.dir/__/core/unix/os.c.o   -c ${DR_ROOT}/core/unix/os.c

    #Usage
    if [ $# -ne 5 ] ;
    then
        echo "collect_head_files make.log old_dr_root new_dr_root old_bld_dir new_bld_dir"
        exit
    fi

    #upate default variables
    MKF=$1
    OLD_DR_ROOT=$2
    NEW_DR_ROOT=$3
    OLD_BLD_DIR=$4
    NEW_BLD_DIR=$5


    #all -I<directories>
    awk -F" -I" '{for(i=2;i<=NF;++i) print $i"\n"}' $MKF | awk '{print $1}' | sort | uniq > includes.txt

    #direcotries from $OLD_BLD_DIR
    grep "\${BLD_DIR}" includes.txt | sed "s=\${BLD_DIR}/==" > delme
    while read f
    do
        if [ -z $f ]
        then
            continue
        fi

        if [ $f == '${BLD_DIR}' ]
        then
            cp ${OLD_BLD_DIR}/*.h $NEW_BLD_DIR

        else
            dname="${NEW_BLD_DIR}/$f"
            if [ ! -d $dname ]
            then
                mkdir -p $dname
            fi
            cp ${OLD_BLD_DIR}/$f/*.h $dname
        fi
    done < delme

    #direcotries from $OLD_DR_ROOT
    grep "\${DR_ROOT}" includes.txt | sed "s=\${DR_ROOT}/==" > delme
    echo "core/unix/include" >> delme
    echo "third_party/valgrind" >> delme
    while read f
    do
        if [ -z $f ]
        then
            continue
        fi

        if [ $f == '${DR_ROOT}' ]
        then
            cp ${OLD_DR_ROOT}/*.h $NEW_DR_ROOT

        else
            dname=${NEW_DR_ROOT}/$f
            if [ ! -d $dname ]
            then
                mkdir -p $dname
            fi
            cp ${OLD_DR_ROOT}/$f/*.h $dname
        fi
    done < delme
    rm delme
}

#build_directory_tree make.log new_dr_root new_bld_dir
build_directory_tree()
{
    #Usage
    if [ $# -ne 3 ] ;
    then
        echo "build_directory_tree make.log new_dr_root new_bld_dir"
        exit
    fi

    #upate default variables
    MKF=$1
    NEW_DR_ROOT=$2
    NEW_BLD_DIR=$3


    grep " -o " $MKF | grep "^cd " | grep "&&" > delme
    awk -F" && " '{print $1}' delme  > _cd.txt
    awk -F" -o " '{print $2}' delme | awk '{print $1}' > _obj.txt
    paste -d "/" _cd.txt _obj.txt > _all.txt
    sed -i 's/^cd //' _all.txt

    #create direcotries for $NEW_BLD_DIR
    grep "\${BLD_DIR}" _all.txt | sed "s=\${BLD_DIR}/==" > delme
    echo "lib64/o" >> delme
    echo "lib64/debug/o" >> delme
    echo "lib64/release/o" >> delme
    echo "bin64/o" >> delme
    while read f
    do
        if [ -z $f ]
        then
            continue
        fi

        dname="${NEW_BLD_DIR}/"`dirname $f`
        if [ ! -d $dname ]
        then
            mkdir -p $dname
        fi

    done < delme

    rm _cd.txt _obj.txt _all.txt delme

}



if [ $# -lt 1 ] ;
then
    do_help

elif [ $1 = "test" ] ;
then
    do_test

else

    OLD_DR_ROOT="/home/yph/project/sgx/dynamorio"
    #OLD_BLD_DIR="/home/yph/project/sgx/dynamorio/debug"
    OLD_BLD_DIR="/home/yph/project/sgx/dynamorio/release"
    NEW_DR_ROOT="/home/yph/project/sgx/dynamorio/test"
    #NEW_BLD_DIR="/home/yph/project/sgx/dynamorio/test/debug"
    NEW_BLD_DIR="/home/yph/project/sgx/dynamorio/test/release"

    if [ ! -d ${NEW_DR_ROOT} ] ;
    then
        mkdir -p ${NEW_DR_ROOT}
    fi
    if [ ! -d ${NEW_BLD_DIR} ] ;
    then
        mkdir -p ${NEW_BLD_DIR}
    fi

    TARGET=$*
    LOG=${OLD_DR_ROOT}/make.log

    cd ${OLD_BLD_DIR} && make clean && make --trace $TARGET 2>&1 > $LOG
    cd ${OLD_DR_ROOT}

    gen_makebash $LOG ${OLD_DR_ROOT} ${NEW_DR_ROOT} ${OLD_BLD_DIR} ${NEW_BLD_DIR}
    collect_src_files ${NEW_DR_ROOT}/make.sh ${OLD_DR_ROOT} ${NEW_DR_ROOT} ${OLD_BLD_DIR} ${NEW_BLD_DIR}
    collect_head_files ${NEW_DR_ROOT}/make.sh ${OLD_DR_ROOT} ${NEW_DR_ROOT} ${OLD_BLD_DIR} ${NEW_BLD_DIR}
    build_directory_tree ${NEW_DR_ROOT}/make.sh ${NEW_DR_ROOT} ${NEW_BLD_DIR}
fi


