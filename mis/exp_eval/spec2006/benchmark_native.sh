#!/bin/bash

cd 400.perlbench
cd .. && cd 401.bzip2 		
time ./bzip2 input.program
cd .. && cd 403.gcc 		
time ./gcc cccp.in -o cccp.s
cd .. && cd 410.bwaves 		
time ./bwaves
cd .. && cd 416.gamess 		
time ./gamess < exam29.config
cd .. && cd 429.mcf 		
time ./mcf inp.in
cd .. && cd 433.milc 		
time ./milc < su3imp.in
cd .. && cd 434.zeusmp 		
time ./zeusmp
cd .. && cd 435.gromacs 		
time ./gromacs -silent -deffnm gromacs.tpr -nice 0
cd .. && cd 436.cactusADM 		
time ./cactusADM benchADM.par
cd .. && cd 437.leslie3d 		
time ./leslie3d < leslie3d.in
cd .. && cd 444.namd 		
time ./namd --input namd.input --iterations 1 --output namd.out
cd .. && cd 445.gobmk 		
time ./gobmk --quiet --mode gtp < capture.tst
cd .. && cd 447.dealII 		
time ./dealII 8
cd .. && cd 450.soplex 		
time ./soplex -m3500 test.mps
cd .. && cd 453.povray 		
time ./povray SPEC-benchmark-test.ini
cd .. && cd 454.calculix 		
time ./calculix -i beampic
cd .. && cd 456.hmmer 		
time ./hmmer bombesin.hmm
cd .. && cd 458.sjeng 		
time ./sjeng test.txt
cd .. && cd 459.GemsFDTD 		
time ./GemsFDTD
cd .. && cd 462.libquantum 		
time ./libquantum 33 5
cd .. && cd 464.h264ref 		
time ./h264ref -d foreman_test_encoder_baseline.cfg
cd .. && cd 465.tonto 		
time ./tonto
cd .. && cd 470.lbm 		
time ./lbm 3000 reference.dat 0 0 100_100_130_cf_a.of
cd .. && cd 471.omnetpp 		
time ./omnetpp omnetpp.ini
cd .. && cd 473.astar 		
time ./astar lake.cfg
cd .. && cd 481.wrf 		
time ./wrf
cd .. && cd 482.sphinx3 		
time ./sphinx_livepretend ctlfile . args.an4
cd .. && cd 483.xalancbmk 		
time ./Xalan -v test.xml xalanc.xsl
cd .. && cd 998.specrand 		
time ./specrand 324342 24239
cd .. && cd 999.specrand 		
time ./specrand 324342 24239
