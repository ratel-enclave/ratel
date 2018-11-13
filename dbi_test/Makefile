#!/usr/bin/make

SRCS	:= $(abspath $(wildcard *.c))
TGTS	:= $(patsubst %.c,%,$(SRCS))
CC_FLAGS	:= -fPIC -pie


.PHONY: all


all: $(TGTS)


$(TGTS) : %: %.c
	gcc $(CC_FLAGS) -o $@ $<


clean:
	rm -rf $(TGTS)
