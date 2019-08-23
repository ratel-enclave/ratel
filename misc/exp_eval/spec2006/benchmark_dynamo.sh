#!/bin/bash

DR_RUN=/home/sgx/project/DynamoRIO/debug_build/bin64/drrun

cd 400.perlbench
cd .. && cd 401.bzip2 		
time ${DR_RUN} ./bzip2 input.program
cd .. && cd 403.gcc 		
time ${DR_RUN} ./gcc cccp.in -o cccp.s
cd .. && cd 410.bwaves 		
time ${DR_RUN} ./bwaves
cd .. && cd 416.gamess 		
time ${DR_RUN} ./gamess < exam29.config
cd .. && cd 429.mcf 		
time ${DR_RUN} ./mcf inp.in
cd .. && cd 433.milc 		
time ${DR_RUN} ./milc < su3imp.in
cd .. && cd 434.zeusmp 		
time ${DR_RUN} ./zeusmp
cd .. && cd 435.gromacs 		
time ${DR_RUN} ./gromacs -silent -deffnm gromacs.tpr -nice 0
cd .. && cd 436.cactusADM 		
time ${DR_RUN} ./cactusADM benchADM.par
cd .. && cd 437.leslie3d 		
time ${DR_RUN} ./leslie3d < leslie3d.in
cd .. && cd 444.namd 		
time ${DR_RUN} ./namd --input namd.input --iterations 1 --output namd.out
cd .. && cd 445.gobmk 		
time ${DR_RUN} ./gobmk --quiet --mode gtp < capture.tst
cd .. && cd 447.dealII 		
time ${DR_RUN} ./dealII 8
cd .. && cd 450.soplex 		
time ${DR_RUN} ./soplex -m3500 test.mps
cd .. && cd 453.povray 		
time ${DR_RUN} ./povray SPEC-benchmark-test.ini
cd .. && cd 454.calculix 		
time ${DR_RUN} ./calculix -i beampic
cd .. && cd 456.hmmer 		
time ${DR_RUN} ./hmmer bombesin.hmm
cd .. && cd 458.sjeng 		
time ${DR_RUN} ./sjeng test.txt
cd .. && cd 459.GemsFDTD 		
time ${DR_RUN} ./GemsFDTD
cd .. && cd 462.libquantum 		
time ${DR_RUN} ./libquantum 33 5
cd .. && cd 464.h264ref 		
time ${DR_RUN} ./h264ref -d foreman_test_encoder_baseline.cfg
cd .. && cd 465.tonto 		
time ${DR_RUN} ./tonto
cd .. && cd 470.lbm 		
time ${DR_RUN} ./lbm 3000 reference.dat 0 0 100_100_130_cf_a.of
cd .. && cd 471.omnetpp 		
time ${DR_RUN} ./omnetpp omnetpp.ini
cd .. && cd 473.astar 		
time ${DR_RUN} ./astar lake.cfg
cd .. && cd 481.wrf 		
time ${DR_RUN} ./wrf
cd .. && cd 482.sphinx3 		
time ${DR_RUN} ./sphinx_livepretend ctlfile . args.an4
cd .. && cd 483.xalancbmk 		
time ${DR_RUN} ./Xalan -v test.xml xalanc.xsl
cd .. && cd 998.specrand 		
time ${DR_RUN} ./specrand 324342 24239
cd .. && cd 999.specrand 		
time ${DR_RUN} ./specrand 324342 24239
