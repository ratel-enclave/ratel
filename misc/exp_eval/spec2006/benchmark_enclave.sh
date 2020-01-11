#!/bin/bash

BIN_ROOT="/home/sgx/project/sgx/sgx-dbi"
ELF_BINS="${BIN_ROOT}/drrun ${BIN_ROOT}/libapp.so ${BIN_ROOT}/libdynamorio.so"

DR_RUN=./drrun

cp ${ELF_BINS} "400.perlbench" && cd 400.perlbench
#{DR_RUN}  --  xxx

cd .. && cp ${ELF_BINS} 401.bzip2 && cd 401.bzip2
${DR_RUN}  --  ./bzip2 input.program

cd .. && cp ${ELF_BINS} 403.gcc && cd 403.gcc
#${DR_RUN}  --  ./gcc cccp.in -o cccp.s

cd .. && cp ${ELF_BINS} 410.bwaves && cd 410.bwaves
#${DR_RUN}  --  ./bwaves

cd .. && cp ${ELF_BINS} 416.gamess && cd 416.gamess
#${DR_RUN}  --  ./gamess < exam29.config

cd .. && cp ${ELF_BINS} 429.mcf && cd 429.mcf
#${DR_RUN}  --  ./mcf inp.in

cd .. && cp ${ELF_BINS} 433.milc && cd 433.milc
${DR_RUN}  --  ./milc < su3imp.in

cd .. && cp ${ELF_BINS} 434.zeusmp && cd 434.zeusmp
${DR_RUN}  --  ./zeusmp

cd .. && cp ${ELF_BINS} 435.gromacs && cd 435.gromacs
#${DR_RUN}  --  ./gromacs -silent -deffnm gromacs.tpr -nice 0

cd .. && cp ${ELF_BINS} 436.cactusADM && cd 436.cactusADM
${DR_RUN}  --  ./cactusADM benchADM.par

cd .. && cp ${ELF_BINS} 437.leslie3d && cd 437.leslie3d
${DR_RUN}  --  ./leslie3d < leslie3d.in

cd .. && cp ${ELF_BINS} 444.namd && cd 444.namd
${DR_RUN}  --  ./namd --input namd.input --iterations 1 --output namd.out

cd .. && cp ${ELF_BINS} 445.gobmk && cd 445.gobmk
${DR_RUN}  --  ./gobmk --quiet --mode gtp < capture.tst

cd .. && cp ${ELF_BINS} 447.dealII && cd 447.dealII
${DR_RUN}  --  ./dealII 8

cd .. && cp ${ELF_BINS} 450.soplex && cd 450.soplex
${DR_RUN}  --  ./soplex -m3500 test.mps

cd .. && cp ${ELF_BINS} 453.povray && cd 453.povray
${DR_RUN}  --  ./povray SPEC-benchmark-test.ini

cd .. && cp ${ELF_BINS} 454.calculix && cd 454.calculix
${DR_RUN}  --  ./calculix -i beampic

cd .. && cp ${ELF_BINS} 456.hmmer && cd 456.hmmer
${DR_RUN}  --  ./hmmer bombesin.hmm

cd .. && cp ${ELF_BINS} 458.sjeng && cd 458.sjeng
${DR_RUN}  --  ./sjeng test.txt

cd .. && cp ${ELF_BINS} 459.GemsFDTD && cd 459.GemsFDTD
${DR_RUN}  --  ./GemsFDTD

cd .. && cp ${ELF_BINS} 462.libquantum && cd 462.libquantum
${DR_RUN}  --  ./libquantum 33 5

cd .. && cp ${ELF_BINS} 464.h264ref && cd 464.h264ref
${DR_RUN}  --  ./h264ref -d foreman_test_encoder_baseline.cfg

cd .. && cp ${ELF_BINS} 465.tonto && cd 465.tonto
${DR_RUN}  --  ./tonto

cd .. && cp ${ELF_BINS} 470.lbm && cd 470.lbm
${DR_RUN}  --  ./lbm 3000 reference.dat 0 0 100_100_130_cf_a.of

cd .. && cp ${ELF_BINS} 471.omnetpp && cd 471.omnetpp
${DR_RUN}  --  ./omnetpp omnetpp.ini

cd .. && cp ${ELF_BINS} 473.astar && cd 473.astar
${DR_RUN}  --  ./astar lake.cfg

cd .. && cp ${ELF_BINS} 481.wrf && cd 481.wrf
#${DR_RUN}  --  ./wrf

cd .. && cp ${ELF_BINS} 482.sphinx3 && cd 482.sphinx3
#${DR_RUN}  --  ./sphinx_livepretend ctlfile . args.an4

cd .. && cp ${ELF_BINS} 483.xalancbmk && cd 483.xalancbmk
${DR_RUN}  --  ./Xalan -v test.xml xalanc.xsl

cd .. && cp ${ELF_BINS} 998.specrand && cd 998.specrand
${DR_RUN}  --  ./specrand 324342 24239

cd .. && cp ${ELF_BINS} 999.specrand && cd 999.specrand
${DR_RUN}  --  ./specrand 324342 24239
