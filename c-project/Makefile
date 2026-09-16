CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c99 -I./include
LDFLAGS = -lm

SRC_DIR = src
BIN_DIR = bin
OBJ_DIR = obj
INC_DIR = include

SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
TARGET = $(BIN_DIR)/main

.PHONY: all clean test help

all: $(TARGET)

$(TARGET): $(OBJECTS) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
	@echo "Build complete: $@"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)
	@echo "Cleaned build artifacts"

test: all
	@echo "Running tests..."
	$(CC) $(CFLAGS) -o $(BIN_DIR)/test_runner tests/*.c $(SRC_DIR)/*.c $(LDFLAGS)
	./$(BIN_DIR)/test_runner

help:
	@echo "Available targets:"
	@echo "  make       - Build the project"
	@echo "  make clean - Remove build artifacts"
	@echo "  make test  - Build and run tests"
	@echo "  make help  - Show this help message"
