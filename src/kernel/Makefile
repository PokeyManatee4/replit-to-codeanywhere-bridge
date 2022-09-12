ASM=nasm
CC=gcc

SRC_DIR=src
TOOLS_DIR=tools
BUILD_DIR=build

.PHONEY: all kernel clean

all: kernel

kernel: $(BUILD_DIR)/kernel.bin

$(BUILD_DIR)/kernel.bin:
	@$(ASM) main.asm -f bin -o $(BUILD_DIR)/kernel.bin

clean:
	@rm -rf build/kernel.bin
