#!/bin/make

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


######## Enclave Settings ########

SGX_SDK_ELV_INC_DIR := $(SGX_SDK)/include $(SGX_SDK)/include/tlibc $(SGX_SDK)/include/libcxx
SGX_SDK_ELV_INCLUDE := $(addprefix -I,$(SGX_SDK_ELV_INC_DIR))

CC_BELOW_4_9 := $(shell expr "`$(CC) -dumpversion`" \< "4.9")
ifeq ($(CC_BELOW_4_9), 1)
	SGX_CC_FLAGS := -nostdinc -fvisibility=hidden -ffunction-sections -fdata-sections -fstack-protector
else
	SGX_CC_FLAGS := -nostdinc -fvisibility=hidden -ffunction-sections -fdata-sections -fstack-protector-strong
endif

SGX_ENCLAVE_CC_FLAGS 	:= $(SGX_CC_FLAGS) $(SGX_SDK_ELV_INCLUDE)
SGX_ENCLAVE_CPP_FLAGS 	:= $(SGX_ENCLAVE_CC_FLAGS) -std=c++11 -nostdinc++

ifneq ($(SGX_MODE), HW)
	Urts_Library_Name := sgx_urts_sim
	Trts_Library_Name := sgx_trts_sim
	Service_Library_Name := sgx_tservice_sim
	UAE_Service_Library_Name := sgx_uae_service_sim
else
	Urts_Library_Name := sgx_urts
	Trts_Library_Name := sgx_trts
	Service_Library_Name := sgx_tservice
	UAE_Service_Library_Name := sgx_uae_service
endif

Crypto_Library_Name := sgx_tcrypto

# To generate a proper enclave, it is recommended to follow below guideline to link the trusted libraries:
#    1. Link sgx_trts with the `--whole-archive' and `--no-whole-archive' options,
#       so that the whole content of trts is included in the libdynamorio.
#    2. For other libraries, you just need to pull the required symbols.
#       Use `--start-group' and `--end-group' to link these libraries.
# Do NOT move the libraries linked with `--start-group' and `--end-group' within `--whole-archive' and `--no-whole-archive' options.
# Otherwise, you may get some undesirable errors.
SGX_ENCLAVE_LD_FLAGS := -Wl,--no-undefined -nostdlib -nodefaultlibs -nostartfiles -L$(SGX_LIBRARY_PATH) \
	-Wl,--whole-archive -l$(Trts_Library_Name) -Wl,--no-whole-archive \
	-Wl,--start-group -lsgx_tstdc -lsgx_tcxx -l$(Crypto_Library_Name) -l$(Service_Library_Name) -Wl,--end-group \
	-Wl,-Bstatic -Wl,-Bsymbolic -Wl,--no-undefined \
	-Wl,--export-dynamic  \
	-Wl,--defsym,__ImageBase=0x0 -Wl,--gc-sections   \
	-Wl,--version-script=dynamorio.lds



######## final target is libdynamorio ########

ENCLAVE_NAME 	:= libdynamorio.so
SIGNED_ENCLAVE_NAME	:= libdynamorio.signed.so
ENCLAVE_CONFIG_FILE := dynamorio.config.xml

.PHONY: all checkdirs $(ENCLAVE_NAME) $(SIGNED_ENCLAVE_NAME) clean

all: checkdirs $(ENCLAVE_NAME) $(SIGNED_ENCLAVE_NAME) Makefile


######## SGX_wrapper Objects ########

dynamorio_t.c: $(SGX_EDGER8R) dynamorio.edl
	$(SGX_EDGER8R) --trusted dynamorio.edl --search-path . --search-path $(SGX_SDK)/include
	@echo "GEN  =>  $@"


dynamorio_t.o: dynamorio_t.c
	$(CC) $(PLATFORM_DEBUG_FLAGS) $(SGX_ENCLAVE_CC_FLAGS) -c $< -o $@
	@echo "CC   <=  $<"


######## Dynamorio Settings ########
BLD_DIR		?= build
INC_DIR		:= core/arch/x86 core/unix core/arch core/lib extra extra/include/annotations
INCLUDES	:= $(addprefix -I./,$(INC_DIR))
MODULES 	:= core core/unix core/lib core/arch core/arch/x86 third_party/libgcc
BUILD_DIR   := $(addprefix $(BLD_DIR)/,$(MODULES))

ifeq ($(SGX_ARCH), x86)
	BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --32 --noexecstack -g
else
	BASIC_AS_FLAGS = -mmnemonic=intel -msyntax=intel -mnaked-reg --64 --noexecstack -g
endif

BASIC_CC_FLAGS	:= -fno-strict-aliasing -fno-stack-protector -fvisibility=internal  -std=gnu99 -fno-omit-frame-pointer -fno-builtin-strcmp -Wall -Werror -Wwrite-strings -Wno-unused-but-set-variable

DYNAMORIO_AS_FLAGS 	:= $(BASIC_AS_FLAGS)

DYNAMORIO_CC_FLAGS	:= $(BASIC_CC_FLAGS) -fPIC -Ddynamorio_EXPORTS $(INCLUDES)
DYNAMORIO_LDSCRIPT	:= core/dynamorio.ldscript
DYNAMORIO_LD_FLAGS	:= $(BASIC_CC_FLAGS) -fPIC -Xlinker -z -Xlinker now -Xlinker -Bsymbolic -nostdlib -Wl,-dT,$(DYNAMORIO_LDSCRIPT) -Wl,--hash-style=both -shared -Wl,-soname,libdynamorio.so


SGX_DYNAMORIO_LD_FLAGS	:= -Wl,-eenclave_entry

######## Dynamorio Objects ########
DYNAMORIO_AS_SRC	:= core/arch/asm_shared.asm core/arch/x86/x86_shared.asm core/arch/x86/x86.asm
DYNAMORIO_AS_OBJ	:= $(patsubst %,$(BLD_DIR)/%.o,$(DYNAMORIO_AS_SRC))


DYNAMORIO_SRC_DIR	:= $(MODULES)
DYNAMORIO_CC_SRC	:= $(foreach sdir,$(DYNAMORIO_SRC_DIR),$(wildcard $(sdir)/*.c))
DYNAMORIO_CC_OBJ	:= $(patsubst %.c,$(BLD_DIR)/%.o,$(DYNAMORIO_CC_SRC))


$(DYNAMORIO_AS_OBJ): $(BLD_DIR)/%.asm.o: %.asm
	${CPP} -g -fPIC $(INCLUDES)  -DCPP2ASM -E $< -o $(BLD_DIR)/$<.s
	${CMAKE} -Dfile=$(BLD_DIR)/$<.s -P "CMake_asm.cmake"
	$(AS) $(DYNAMORIO_AS_FLAGS) -c $(BLD_DIR)/$<.s -o $@


${DYNAMORIO_LDSCRIPT}: make/ldscript.cmake
	${CMAKE} -D outfile=$@ -DCMAKE_LINKER=/usr/bin/ld -DCMAKE_COMPILER_IS_GNUCC=TRUE -DLD_FLAGS=-melf_x86_64 -Dset_preferred=1 -Dreplace_maxpagesize= -Dpreferred_base=0x0 -Dadd_bounds_vars=ON -P $<


vpath %.c $(DYNAMORIO_SRC_DIR)


define make-goal
$1/%.o: %.c
	$(CC) $(PLATFORM_DEBUG_FLAGS) $(DYNAMORIO_CC_FLAGS)  -c $$< -o $$@
endef

$(foreach bdir,$(BUILD_DIR),$(eval $(call make-goal,$(bdir))))

######## sgx_edge Objects ########

EDGE_DIR	:= sgx_edge
EDGE_SRCS	:= $(wildcard $(EDGE_DIR)/*.c)
EDGE_OBJS	:= $(patsubst %c,%o,$(EDGE_SRCS))
DYNAMORIO_DEFINES	:= -DINTERNAL -DDEBUG -DDRSTATS_DEMO -DX86 -DX64 -DLINUX -DUNIX -DCLIENT_INTERFACE -DAPP_EXPORTS -DKSTATS -DHAVE_FVISIBILITY -

$(EDGE_OBJS): %.o: %.c
	$(CC) $(PLATFORM_DEBUG_FLAGS) $(SGX_ENCLAVE_CC_FLAGS) $(DYNAMORIO_CC_FLAGS) -fPIC  -c $< -o $@


######## building libdynamorio ########
$(ENCLAVE_NAME): dynamorio_t.o $(DYNAMORIO_AS_OBJ) $(DYNAMORIO_CC_OBJ) $(EDGE_OBJS) ${DYNAMORIO_LDSCRIPT}
	$(LD) $(PLATFORM_DEBUG_FLAGS) $(SGX_ENCLAVE_LD_FLAGS) $(DYNAMORIO_LD_FLAGS) $(SGX_DYNAMORIO_LD_FLAGS) -o $@ $(EDGE_OBJS) $(DYNAMORIO_AS_OBJ) $(DYNAMORIO_CC_OBJ) dynamorio_t.o
	#$(CP) $@ $@.full
	#$(OBJCOPY) --only-keep-debug $@ $@.debug
	#$(OBJCOPY) --add-gnu-debuglink=$@.debug $@
	#$(STRIP) -g -x $@



$(SIGNED_ENCLAVE_NAME): $(ENCLAVE_NAME)
	$(SGX_ENCLAVE_SIGNER) sign -key dynamorio_private.pem -enclave $(ENCLAVE_NAME) -out $@ -config $(ENCLAVE_CONFIG_FILE)
	@echo "SIGN =>  $@"


checkdirs: $(BUILD_DIR)


$(BUILD_DIR):
	@mkdir -p $@


clean:
	@rm -f .config_* $(ENCLAVE_NAME) $(SIGNED_ENCLAVE_NAME) dynamorio_t.*
	@rm	-rf $(BUILD_DIR)
	@rm	-rf $(BLD_DIR)
