.SILENT:

CC = gcc
AS = nasm
CFLAGS = -Wall -Wextra -Werror
ASFLAGS = -f elf64
LDFLAGS = 

TARGET = program
C_SOURCES = main.c
ASM_SOURCES = ft_strlen.s
OBJECTS = $(C_SOURCES:.c=.o) $(ASM_SOURCES:.s=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^
	echo $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%.o: %.s
	$(AS) $(ASFLAGS) $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

re: clean all

.PHONY: all clean