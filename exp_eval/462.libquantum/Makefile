#!/usr/bin/make

BLD_DIR     := build
EXE_DIR     := exe
SRC_DIR     := src


all:
	make -C ${SRC_DIR}


clean:
	rm -rf ${BLD_DIR}/*
	rm -rf ${EXE_DIR}/*
	make -C ${SRC_DIR} clean
