# https://github.com/libopencm3/libopencm3-template/blob/master/my-project/Makefile

PROJECT = stm32-sensor-node
BUILD_DIR = bin

SRC_CFILES := $(shell find src/ -name '*.c')
SRC_AFILES := $(shell find src/ -name '*.S')
CFILES += $(SRC_CFILES)
AFILES += $(SRC_AFILES)
INCLUDES += -Iinc

DEVICE = stm32f103c8t6

OPENCM3_DIR = lib/libopencm3

include $(OPENCM3_DIR)/mk/genlink-config.mk
include rules.mk
include $(OPENCM3_DIR)/mk/genlink-rules.mk
