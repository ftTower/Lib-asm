#include <stdlib.h>
#include <stdio.h>

extern size_t asm_strlen(const char *str);


int main() {
    const char *msg = "Hello";

    size_t len = asm_strlen(msg);
    printf("len : %ld\n", len);
}

//nasm -f elf64 ft_strlen.s -o lenstr.o
// gcc main.c lenstr.o -o main
// ./main