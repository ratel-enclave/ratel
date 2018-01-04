#!/bin/make

all: checkdirs libapp.so

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
INC_DIR	:= core/arch/x86 core/unix core/arch core/lib extra extra/include/annotations
INCLUDES	:= $(addprefix -I./,$(INC_DIR))
MODULES := core core/unix core/lib core/arch core/arch/x86 third_party/libgcc
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

DRLIBS_		:= libdrhelper.a
DRLIBS      := $(addprefix $(BLD_DIR)/,$(DRLIBS_))



#Built target dynamorio
DYNAMORIO_AS_SRC	:= core/arch/x86/x86.asm
DYNAMORIO_AS_OBJ	:= $(patsubst %,$(BLD_DIR)/%.o,$(DYNAMORIO_AS_SRC))
DYNAMORIO_AS_FLAGS := $(BASIC_AS_FLAGS)

DYNAMORIO_SRC_DIR	:= $(MODULES)
DYNAMORIO_CC_SRC	:= $(foreach sdir,$(DYNAMORIO_SRC_DIR),$(wildcard $(sdir)/*.c))
DYNAMORIO_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DYNAMORIO_CC_SRC))
DYNAMORIO_CC_FLAGS	:= $(BASIC_CC_FLAGS) -Ddynamorio_EXPORTS -fPIC
DYNAMORIO_LDSCRIPT	:= core/app.ldscript
DYNAMORIO_LD_FLAGS	:= $(BASIC_CC_FLAGS) -Xlinker -z -Xlinker now -Xlinker -Bsymbolic -nostdlib -Wl,--entry,_start -Wl,-dT,$(DYNAMORIO_LDSCRIPT) -Wl,--hash-style=both -shared -Wl,-soname,libapp.so


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


.PHONY: all checkdirs clean


libapp.so: $(DRLIBS) $(DYNAMORIO_AS_OBJ) $(DYNAMORIO_CC_OBJ)
	$(LD)  $(DYNAMORIO_LD_FLAGS) -o $@ $(DYNAMORIO_AS_OBJ) $(DYNAMORIO_CC_OBJ) $(DRLIBS)
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
	@rm	libapp.so*
