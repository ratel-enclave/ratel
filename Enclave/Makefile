#!/bin/make

Enclave_Name		?= libdynamorio.so

all: checkdirs $(Enclave_Name)

CC	:= /usr/bin/cc
CPP	:= /usr/bin/cpp
LD	:= /usr/bin/cc
AS	:= /usr/bin/as
AR	:= /usr/bin/ar
CMAKE	:= /usr/bin/cmake
RANDLIB := /usr/bin/ranlib
CP	:= /bin/cp
OBJCOPY	:= /usr/bin/objcopy
STRIP	:= /usr/bin/strip

SGX_ARCH ?= x64
SGX_DEBUG ?= 1
SGX_SDK_ELV_INCLUDE		?=
SGX_Enclave_CC_Flags	?= -m64 -O0 -g -ggdb3
SGX_Enclave_Cpp_Flags	?=
SGX_Enclave_Link_Flags	?=
DYNAMORIO_T_OBJ			?= dynamorio_t.o

#export SGX_ARCH SGX_DEBUG SGX_SDK_INCLUDE
#export SGX_Enclave_CC_Flags SGX_Enclave_Cpp_Flags SGX_Enclave_Link_Flags Enclave_Name

BLD_DIR	?= build
INC_DIR	:= core/arch/x86 core/unix core/arch core/lib extra extra/include/annotations
INCLUDES	:= $(addprefix -I./,$(INC_DIR))
INCLUDES	+= $(SGX_SDK_ELV_INCLUDE)
MODULES := core core/unix core/lib core/arch core/arch/x86 third_party/libgcc
BUILD_DIR   := $(addprefix $(BLD_DIR)/,$(MODULES))


BASIC_CC_FLAGS	:= $(SGX_Enclave_CC_Flags) -fno-strict-aliasing -fno-stack-protector -fvisibility=internal  -std=gnu99 -fno-omit-frame-pointer -fno-builtin-strcmp -Wall -Werror -Wwrite-strings -Wno-unused-but-set-variable


ifeq ($(SGX_ARCH), x86)
	BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --32 --noexecstack -g
else
	BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --64 --noexecstack -g
endif


#Built target libdynamorio.so
DYNAMORIO_AS_SRC	:= core/arch/asm_shared.asm core/arch/x86/x86_shared.asm core/arch/x86/x86.asm 
DYNAMORIO_AS_OBJ	:= $(patsubst %,$(BLD_DIR)/%.o,$(DYNAMORIO_AS_SRC))
DYNAMORIO_AS_FLAGS := $(BASIC_AS_FLAGS)

DYNAMORIO_SRC_DIR	:= $(MODULES)
DYNAMORIO_CC_SRC	:= $(foreach sdir,$(DYNAMORIO_SRC_DIR),$(wildcard $(sdir)/*.c))
DYNAMORIO_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DYNAMORIO_CC_SRC)) $()
DYNAMORIO_CC_FLAGS	:= $(BASIC_CC_FLAGS) -Ddynamorio_EXPORTS -fPIC
DYNAMORIO_LDSCRIPT	:= core/dynamorio.ldscript
DYNAMORIO_LD_FLAGS	:= $(SGX_Enclave_Link_Flags) -Xlinker -z -Xlinker now -Xlinker -Bsymbolic -nostdlib -Wl,-dT,$(DYNAMORIO_LDSCRIPT) -Wl,--hash-style=both -shared -Wl,-soname,libdynamorio.so


$(DYNAMORIO_AS_OBJ): $(BLD_DIR)/%.asm.o: %.asm
	${CPP} -g -fPIC $(INCLUDES)  -DCPP2ASM -E $< -o $(BLD_DIR)/$<.s
	${CMAKE} -Dfile=$(BLD_DIR)/$<.s -P "CMake_asm.cmake"
	$(AS) $(DYNAMORIO_AS_FLAGS) -c $(BLD_DIR)/$<.s -o $@

vpath %.c $(DYNAMORIO_SRC_DIR)


define make-goal
$1/%.o: %.c
	$(CC) $(INCLUDES) $(DYNAMORIO_CC_FLAGS) -c $$< -o $$@
endef

$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))


.PHONY: all checkdirs $(Enclave_Name) clean


$(Enclave_Name): $(DYNAMORIO_AS_OBJ) $(DYNAMORIO_CC_OBJ) $(DYNAMORIO_T_OBJ)
	$(LD)  $(DYNAMORIO_LD_FLAGS) -o $@ $(DYNAMORIO_AS_OBJ) $(DYNAMORIO_CC_OBJ) $(DYNAMORIO_T_OBJ)
	#$(CP) $@ $@.full
	#$(OBJCOPY) --only-keep-debug $@ $@.debug
	#$(OBJCOPY) --add-gnu-debuglink=$@.debug $@
	#$(STRIP) -g -x $@


checkdirs: $(BUILD_DIR)


$(BUILD_DIR):
	@mkdir -p $@


clean:
	@rm	-rf $(BUILD_DIR)
	@rm	-rf $(BLD_DIR)
