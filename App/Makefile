#
# Copyright (C) 2011-2017 Intel Corporation. All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
#   * Redistributions of source code must retain the above copyright
#     notice, this list of conditions and the following disclaimer.
#   * Redistributions in binary form must reproduce the above copyright
#     notice, this list of conditions and the following disclaimer in
#     the documentation and/or other materials provided with the
#     distribution.
#   * Neither the name of Intel Corporation nor the names of its
#     contributors may be used to endorse or promote products derived
#     from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
#

include ../buildenv.mk


ifeq ($(SGX_ARCH), x86)
	SGX_LIBRARY_PATH := $(SGX_SDK)/lib
	SGX_ENCLAVE_SIGNER := $(SGX_SDK)/bin/x86/sgx_sign
	SGX_EDGER8R := $(SGX_SDK)/bin/x86/sgx_edger8r
else
	SGX_LIBRARY_PATH := $(SGX_SDK)/lib64
	SGX_ENCLAVE_SIGNER := $(SGX_SDK)/bin/x64/sgx_sign
	SGX_EDGER8R := $(SGX_SDK)/bin/x64/sgx_edger8r
endif

######## App Settings ########

ifeq ($(SGX_ARCH), x86)
	BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --32 --noexecstack -g
else
	BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --64 --noexecstack -g
endif

ifneq ($(SGX_MODE), HW)
	Urts_Library_Name := sgx_urts_sim
else
	Urts_Library_Name := sgx_urts
endif

APP_INC_DIRS := -I./ -I$(SGX_SDK)/include

APP_CC_FLAGS := $(PLATFORM_DEBUG_FLAGS) -fPIC -Wno-attributes $(APP_INC_DIRS)

# Three configuration modes - Debug, prerelease, release
#   Debug - Macro DEBUG enabled.
#   Prerelease - Macro NDEBUG and EDEBUG enabled.
#   Release - Macro NDEBUG enabled.
ifeq ($(SGX_DEBUG), 1)
        APP_CC_FLAGS += -DDEBUG -UNDEBUG -UEDEBUG
else ifeq ($(SGX_PRERELEASE), 1)
        APP_CC_FLAGS += -DNDEBUG -DEDEBUG -UDEBUG
else
        APP_CC_FLAGS += -DNDEBUG -UEDEBUG -UDEBUG
endif

APP_CXX_FLAGS := $(APP_CC_FLAGS)


#APP_LINK_FLAGS := $(PLATFORM_DEBUG_FLAGS) -Wl,-eapp_start -L$(SGX_LIBRARY_PATH) -l$(Urts_Library_Name) -lpthread
APP_LINK_FLAGS := $(PLATFORM_DEBUG_FLAGS) -L$(SGX_LIBRARY_PATH) -l$(Urts_Library_Name) -lpthread

ifneq ($(SGX_MODE), HW)
	APP_LINK_FLAGS += -lsgx_uae_service_sim
else
	APP_LINK_FLAGS += -lsgx_uae_service
endif


.PHONY: all clean


APP_AS_SRCS	:= startup/x86.asm
APP_AS_ASMS	:= $(patsubst %,%.s,$(APP_AS_SRCS))
APP_AS_OBJS	:= $(patsubst %,%.o,$(APP_AS_SRCS))
APP_AS_FALG	:= $(BASIC_AS_FLAGS)


APP_CXX_SRCS 	:= App.c syscall.c
APP_CXX_OBJS 	:= $(APP_CXX_SRCS:.c=.o)
APP_NAME		:= libapp.so


all: $(APP_NAME)


######## App Objects ########

%.asm:
$(APP_AS_OBJS): %.asm.o: %.asm
	@${CPP} -g -fPIC $(INCLUDES)  -DCPP2ASM -E $< -o $<.s
	@${CMAKE} -Dfile=$<.s -P "CMake_asm.cmake"
	@$(AS) $(APP_AS_FALG) -c $<.s -o $@

dynamorio_u.c: $(SGX_EDGER8R) ../Enclave/dynamorio.edl
	$(SGX_EDGER8R) --untrusted ../Enclave/dynamorio.edl --search-path ../Enclave --search-path $(SGX_SDK)/include
	@echo "GEN  =>  $@"

dynamorio_u.o: dynamorio_u.c
	@$(CC) $(APP_CC_FLAGS) -c $< -o $@
	@echo "CC   <=  $<"

%.o: %.c
	@$(CXX) $(APP_CXX_FLAGS) -c $< -o $@
	@echo "CXX  <=  $<"

$(APP_NAME): dynamorio_u.o $(APP_CXX_OBJS) $(APP_AS_OBJS)
	@$(CXX) $^ -o $@ $(APP_LINK_FLAGS)
	@echo "LINK =>  $@"

clean:
	@rm -f .config_* $(APP_NAME) $(APP_CXX_OBJS) $(APP_AS_ASMS) $(APP_AS_OBJS) dynamorio_u.*
