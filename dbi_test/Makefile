#!/usr/bin/make

.PHONY: all


all: sgx_mm


sgx_mm:
	gcc -fPIC -pie -o sgx_mm sgx_mm.c


clean:
	rm -rf sgx_mm
