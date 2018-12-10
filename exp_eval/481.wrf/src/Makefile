#!/usr/bin/make

SRC := $(wildcard *.c)
OBJ := $(patsub %.c,%.o,$(SRC))
TGT := wrf

.PHONY: $(TGT) clean


$(TGT) : $(SRC)
	gcc -fPIC -pie -ggdb3 -I. -o $@ $^


clean:
	rm -rf $(OBJ) $(TGT)
