#utility programs
CC		:= /usr/bin/cc
CXX		:= /usr/bin/cc
CPP		:= /usr/bin/cpp
LD		:= /usr/bin/cc
AS		:= /usr/bin/as
AR		:= /usr/bin/ar
CMAKE	:= /usr/bin/cmake
RANDLIB := /usr/bin/ranlib
CP		:= /bin/cp
OBJCOPY	:= /usr/bin/objcopy
STRIP	:= /usr/bin/strip

#SGX environments
SGX_SDK 	?= /opt/intel/sgxsdk
SGX_MODE 	?= HW
SGX_ARCH 	?= x64
SGX_DEBUG 	?= 1

ifeq ($(shell getconf LONG_BIT), 32)
	SGX_ARCH := x86
else ifeq ($(findstring -m32, $(CXXFLAGS)), -m32)
	SGX_ARCH := x86
endif

ifeq ($(SGX_ARCH), x86)
	PLATFORM_DEBUG_FLAGS := -m32
else
	PLATFORM_DEBUG_FLAGS := -m64
endif

ifeq ($(SGX_DEBUG), 1)
	ifeq ($(SGX_PRERELEASE), 1)
		$(error Cannot set SGX_DEBUG and SGX_PRERELEASE at the same time!!)
	endif
endif

ifeq ($(SGX_DEBUG), 1)
	PLATFORM_DEBUG_FLAGS += -ggdb3
else
	PLATFORM_DEBUG_FLAGS += -O2
endif

ifeq ($(SGX_MODE), HW)
ifeq ($(SGX_DEBUG), 1)
    BUILD_MODE = HW_DEBUG
else ifeq ($(SGX_PRERELEASE), 1)
    BUILD_MODE = HW_PRERELEASE
else
    BUILD_MODE = HW_RELEASE
endif
else
ifeq ($(SGX_DEBUG), 1)
    BUILD_MODE = SIM_DEBUG
else ifeq ($(SGX_PRERELEASE), 1)
    BUILD_MODE = SIM_PRERELEASE
else
    BUILD_MODE = SIM_RELEASE
endif
endif

