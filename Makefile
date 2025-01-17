CC = gcc
CFLAGS = -Wall -Wextra -fsanitize=address
SRC_DIR = src
OBJ_DIR = output
TARGET = othello

SRC_FILES = $(SRC_DIR)/main.c \
            $(SRC_DIR)/board.c \
            $(SRC_DIR)/computer.c \
            $(SRC_DIR)/digraph.c \
            $(SRC_DIR)/game.c \
            $(SRC_DIR)/utils.c

OBJ_FILES = $(SRC_FILES:%.c=$(OBJ_DIR)/%.o)

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)

.PHONY: all clean
