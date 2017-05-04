CC := gcc
LFLAGS :=  -I src -Wall
BIN_DIR := bin/
SRC_DIR := src/
TARGET:= strings
TARGET := $(addprefix $(BIN_DIR), $(TARGET))
SRC := main.c opert.c 
SRC := $(addprefix $(SRC_DIR), $(SRC))

all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) $(LFLAGS) -o $@ $(SRC)

.PHONY: all clean
clean:
	rm -rf bin/*  