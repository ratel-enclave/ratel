#!/usr/bin/make


SRC=$(wildcard *.cpp)
OBJ=$(patsubst %.cpp,%.o,${SRC})
INC=$(wildcard *.h)
TGT=astar


.PHONY : $(TGT) clean


astar : $(SRC)
	g++ -pie -fPIC -I. -ggdb3 -O0 -o $@ $^


clean :
	@rm -rf $(OBJ) $(TGT)
