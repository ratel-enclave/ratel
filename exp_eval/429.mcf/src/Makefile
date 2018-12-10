#!/usr/bin/make

SRCS := $(wildcard *.c)
OBJS := $(patsubst %.c,%.o,$(SRCS))
TGT  := mcf

.PHONY : $(TGT) clean


$(TGT) : $(SRCS)
	gcc -fPIC -pie -o $@ $^


clean :
	rm -rf $(TGT) $(OBJS)
