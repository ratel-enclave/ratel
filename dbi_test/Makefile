#!/usr/bin/make

SRCS_CXX	:= $(abspath $(wildcard *.c))
SRCS_CPP    := $(abspath $(wildcard *.cpp))

TGTS_CXX	:= $(patsubst %.c,%,$(SRCS_CXX))
TGTS_CPP	:= $(patsubst %.cpp,%,$(SRCS_CPP))
TGTS        := $(TGTS_CXX) $(TGTS_CPP)


CXX_CC      := gcc
CPP_CC      := g++
CXX_FLAGS	:= -O2 -w -fPIC -pie
CPP_FLAGS	:= $(CXX_FLAGS)
LDFLAGS 	= -lpthread


.PHONY: all


all: $(TGTS)


$(TGTS_CXX) : %: %.c
	$(CXX_CC) $(CXX_FLAGS) -o $@ $< $(LDFLAGS)


$(TGTS_CPP) : %: %.cpp
	$(CPP_CC) $(CPP_FLAGS) -o $@ $<


clean:
	rm -rf $(TGTS)
