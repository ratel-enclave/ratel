#!/bin/make

all: checkdirs drrun

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


BLD_DIR	?= build
INC_DIR	:= core core/arch core/arch/x86 core/unix  core/lib libutil extra extra/include/annotations
INCLUDES	:= $(addprefix -I./,$(INC_DIR))
MODULES := core core/unix core/lib core/arch core/arch/x86 libutil tools
BUILD_DIR   := $(addprefix $(BLD_DIR)/,$(MODULES))


BASIC_CC_FLAGS	:= -m64  -fno-strict-aliasing -fno-stack-protector -fvisibility=internal  -std=gnu99 -ggdb3 -fno-omit-frame-pointer -fno-builtin-strcmp -Wall -Werror -Wwrite-strings -Wno-unused-but-set-variable
BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --64 --noexecstack -g

#Built target drhelper
DRHELPER_AS_SRC	:= core/arch/asm_shared.asm core/arch/x86/x86_shared.asm
DRHELPER_AS_OBJ	:= $(patsubst %,$(BLD_DIR)/%.o,$(DRHELPER_AS_SRC))
DRHELPER_AS_FLAGS := $(BASIC_AS_FLAGS)
DRHELPER_CC_SRC := core/lib/dr_helper.c
DRHELPER_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DRHELPER_CC_SRC))
DRHELPER_CC_FLAGS := $(BASIC_CC_FLAGS) -fPIC

$(DRHELPER_AS_OBJ): $(BLD_DIR)/%.asm.o: %.asm
	${CPP} -g -fPIC $(INCLUDES)  -DCPP2ASM -E $< -o $(BLD_DIR)/$<.s
	${CMAKE} -Dfile=$(BLD_DIR)/$<.s -P "CMake_asm.cmake"
	$(AS) $(DRHELPER_AS_FLAGS) -c $(BLD_DIR)/$<.s -o $@

$(DRHELPER_CC_OBJ): $(BLD_DIR)/%.o: %.c
	$(CC) $(INCLUDES) $(DRHELPER_CC_FLAGS) -c $< -o $@

$(BLD_DIR)/libdrhelper.a: $(DRHELPER_AS_OBJ) $(DRHELPER_CC_OBJ)
	$(AR) qc $@ $^
	$(RANDLIB) $@


#Built target drdecode
DRDECODE_CC_FILES	:= opnd_shared.c x86/opnd.c instr_shared.c x86/instr.c instrlist.c decode_shared.c x86/decode.c encode_shared.c x86/encode.c disassemble_shared.c x86/disassemble.c x86/decode_table.c x86/decode_fast.c x86/mangle.c decodelib.c
DRDECODE_CC_SRC	:= $(addprefix core/arch/,$(DRDECODE_CC_FILES))
DRDECODE_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DRDECODE_CC_SRC))
DRDECODE_CC_FLAGS	:= $(BASIC_CC_FLAGS)  -DNOT_DYNAMORIO_CORE_PROPER -DSTANDALONE_DECODER -fPIC

$(DRDECODE_CC_OBJ): $(BLD_DIR)/%.o: %.c
	$(CC) $(INCLUDES) $(DRDECODE_CC_FLAGS) -c $< -o $@

$(BLD_DIR)/libdrdecode.a: $(DRDECODE_CC_OBJ)
	$(AR) qc $@ $^
	$(RANDLIB) $@


#Built target drinjectlib
DRINJECTLIB_CC_SRC	:= core/unix/injector.c core/config.c core/unix/os.c core/string.c core/io.c core/unix/module_elf.c
DRINJECTLIB_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DRINJECTLIB_CC_SRC))
DRINJECTLIB_CC_FLAGS	:= $(BASIC_CC_FLAGS) -DNOT_DYNAMORIO_CORE_PROPER -DRC_IS_DRINJECTLIB

$(DRINJECTLIB_CC_OBJ): $(BLD_DIR)/%.o: %.c
	$(CC) $(INCLUDES) $(DRINJECTLIB_CC_FLAGS) -c $< -o $@

$(BLD_DIR)/libdrinjectlib.a: $(DRINJECTLIB_CC_OBJ)
	$(AR) qc $@ $^
	$(RANDLIB) $@


#Built target drfrontendlib
DRFRONTENDLIB_CC_SRC	:= libutil/dr_frontend_unix.c  core/unix/os.c  core/unix/module_elf.c libutil/dr_frontend_common.c
DRFRONTENDLIB_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.2.o,$(DRFRONTENDLIB_CC_SRC))
DRFRONTENDLIB_CC_FLAGS	:= $(BASIC_CC_FLAGS) -DNOT_DYNAMORIO_CORE_PROPER


$(DRFRONTENDLIB_CC_OBJ): $(BLD_DIR)/%.2.o: %.c
	$(CC) $(INCLUDES) $(DRFRONTENDLIB_CC_FLAGS) -c $< -o $@

$(BLD_DIR)/libdrfrontendlib.a: $(DRFRONTENDLIB_CC_OBJ)
	$(AR) qc $@ $^
	$(RANDLIB) $@


#Built target drconfiglib
DRCONFIGLIB_CC_SRC	:= libutil/dr_config.c  libutil/utils.c  core/unix/nudgesig.c
DRCONFIGLIB_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.3.o,$(DRCONFIGLIB_CC_SRC))
DRCONFIGLIB_CC_FLAGS	:= -DRC_IS_DRCONFIGLIB -DNOT_DYNAMORIO_CORE

$(DRCONFIGLIB_CC_OBJ): $(BLD_DIR)/%.3.o: %.c
	$(CC) $(INCLUDES) $(DRCONFIGLIB_CC_FLAGS) -c $< -o $@

$(BLD_DIR)/libdrconfiglib.a: $(DRCONFIGLIB_CC_OBJ)
	$(AR) qc $@ $^
	$(RANDLIB) $@


#Built target drrun
DRRUN_CC_SRC	:= tools/drrun.c
DRRUN_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DRRUN_CC_SRC))
DRRUN_CC_FLAGS	:= $(BASIC_CC_FLAGS) -DRC_IS_drrun -DDRRUN
DRRUN_LD_FLAGS	:= $(BASIC_CC_FLAGS) -Wl,--hash-style=both 
DRRUN_EXTRA_LD_FLAGS		:= -Wl,--section-start=.text=0x8048000
DRLIBS_A	:= libdrconfiglib.a libdrfrontendlib.a libdrinjectlib.a libdrdecode.a libdrhelper.a   
DRLIBS		:= $(addprefix $(BLD_DIR)/,$(DRLIBS_A))

$(DRRUN_CC_OBJ): $(BLD_DIR)/%.o: %.c
	$(CC) $(INCLUDES) $(DRRUN_CC_FLAGS) -c $< -o $@


.PHONY: all checkdirs clean


drrun: $(DRRUN_CC_OBJ) $(DRLIBS)
	$(LD)  $(DRRUN_LD_FLAGS) $(DRRUN_CC_OBJ) -o $@ -rdynamic $(DRLIBS) $(DRRUN_EXTRA_LD_FLAGS)
	$(CP) drrun drrun.full
	$(OBJCOPY) --only-keep-debug drrun drrun.debug
	$(OBJCOPY) --add-gnu-debuglink=drrun.debug drrun
	$(STRIP) -g -x drrun


checkdirs: $(BUILD_DIR)


$(BUILD_DIR):
	@mkdir -p $@


clean:
	@rm	-rf $(BUILD_DIR)
	@rm	-rf $(BLD_DIR)
	@rm	drrun*
