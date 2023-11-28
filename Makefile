CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic
SRC_FILES = *.c
TARGET = program

all: $(TARGET)

$(TARGET): $(SRC_FILES)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)

.PHONY: all clean
