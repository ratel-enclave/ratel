#!/usr/bin/python

import os, sys
import stat
from shutil import copyfile
from distutils.dir_util import copy_tree


def search_file(search_path, filename):
   """Given a search path, find file
   """
   file_found = 0
   paths = ["data/test/input", "data/ref/input", "data/all/input"]
   for path in paths:
        full_path = os.path.join(search_path, path, filename)
        if os.path.exists(full_path):
            file_found = 1
            break

   if file_found:
      return os.path.abspath(os.path.join(search_path, path, filename))
   else:
      return None


def copy_executable_file(build_path, bench_prog, dest_dir):
    #id.name
    fileds = bench_prog.split(".")
    numid = fileds[0]
    prog = fileds[1]

    #copy exe
    if bench_prog == "482.sphinx3":
        exename = "sphinx_livepretend"
    elif bench_prog == "483.xalancbmk":
        exename = "Xalan"
    else:
        exename = prog

    fexe_path = os.path.join(build_path, exename)
    if os.path.isfile(fexe_path):
        dest_file = os.path.join(dest_dir, exename)
        copyfile(fexe_path, dest_file)
        st = os.stat(dest_file)
        os.chmod(dest_file, st.st_mode | stat.S_IEXEC)


def copy_data_item(bench_dir, data_item, dest_dir):
    #no data file
    if data_item == "-":
        return

    #copy a single file
    flds = data_item.split("/")
    if len(flds) == 1:
        fdata_path = search_file(bench_dir, data_item)
        if fdata_path is None:
            return
        assert(os.path.isfile(fdata_path))
        dest_file = os.path.join(dest_dir, data_item)
        copyfile(fdata_path, dest_file)
        return


    #copy a directory
    if flds[-1] != "*":
        fdata_path = os.path.join(bench_dir, "data", data_item)
        if not os.path.isdir(fdata_path):
            return
        dest_path = os.path.join(dest_dir, flds[-1])
        # if not os.path.isdir(dest_path):
        #     os.mkdir(dest_path)
        copy_tree(fdata_path, dest_path)
        return


    #copy multiple files
    assert(flds[-1] == "*")
    fdata_path = os.path.join(bench_dir, "data", "/".join(flds[:-1]))
    if not os.path.isdir(fdata_path):
        return
    copy_tree(fdata_path, dest_dir)


def copy_exedata(benchmark):
    home = os.path.expanduser("~")
    #./benchspec/CPU2006/401.bzip2/build/build_base_sgxdbi.0000/bzip2
    SPEC_ROOT = os.path.join(home, "project/SPEC_CPU2006v1.2/benchspec/CPU2006")

    #/home/sgx/project/sgx/sgx-dbi/exp_eval/spec2006
    DEST_ROOT = os.path.join(home, "project/sgx/sgx-dbi/exp_eval/spec2006")

    for (bench_prog, fdata_list) in benchmark.items():

        #create destination directory if needs
        dest_dir=os.path.join(DEST_ROOT, bench_prog)
        if not os.path.isdir(dest_dir):
            os.mkdir(dest_dir)


        #copy executable
        build_path = os.path.join(SPEC_ROOT, bench_prog, "build/build_base_sgxdbi.0000")
        copy_executable_file(build_path, bench_prog, dest_dir)


        #copy data
        bench_path = os.path.join(SPEC_ROOT, bench_prog)
        for fdata in fdata_list:
            copy_data_item(bench_path, fdata, dest_dir)



if __name__ == "__main__":
    benchspec = {"400.perlbench":["attrs.out"],
    "401.bzip2":["input.program"],
    "403.gcc":["cccp.in"],
    "410.bwaves":["test"],
    "416.gamess":["exam29.config", "exam29.inp"],
    "429.mcf":["inp.in"],
    "433.milc":["su3imp.in"],
    "434.zeusmp":["zmp_inp"],
    "435.gromacs":["gromacs.tpr"],
    "436.cactusADM":["benchADM.par"],
    "437.leslie3d":["leslie3d.in"],
    "444.namd":["namd.input"],
    "445.gobmk":["capture.tst", "all/input/golois"],
    "447.dealII":["-"],   #8
    "450.soplex":["ref.mps", "test.mps"],
    "453.povray":["SPEC-benchmark-test.ini", "SPEC-benchmark-test.pov", "all/input/*"],
    "454.calculix":["beampic.inp"],
    "456.hmmer":["bombesin.hmm"],
    "458.sjeng":["test.txt"],
    "459.GemsFDTD":["test.in", "yee.dat", "sphere.pec"],
    "462.libquantum":["-"],   #33 5
    "464.h264ref":["foreman_test_encoder_baseline.cfg", "foreman_qcif.yuv"],
    "465.tonto":["stdin"],
    "470.lbm":["100_100_130_cf_a.of"],
    "471.omnetpp":["omnetpp.ini"],
    "473.astar":["lake.cfg", "lake.bin"],
    "481.wrf":["namelist.input", "wrfbdy_d01", "wrfinput_d01", "all/input/*"],
    "482.sphinx3":["test/input/*"], #"args.an4"
    "483.xalancbmk":["test.xml", "xalanc.xsl"],
    "998.specrand":["-"], #324342 24239
    "999.specrand":["-"]  #324342 24239
    }

    #benchspec = {"453.povray":["SPEC-benchmark-test.ini", "SPEC-benchmark-test.pov", "all/input/*"]}
    #benchspec = {"445.gobmk":["capture.tst", "all/input/golois"]}
    copy_exedata(benchspec)
