#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

extern size_t asm_strlen(const char *str);


void test_strlen()
{
    const char *msg = "Hello";
    
    size_t len = asm_strlen(msg);
    printf("(Hello)len : %ld\n", len);
        
    len = asm_strlen("Hello");
    printf("(Hello)len : %ld\n", len);
    
    msg = NULL;
    
    len = asm_strlen(msg);
    printf("(NULL)len : %ld\n", len);
        
    len = asm_strlen(NULL);
    printf("(NULL)len : %ld\n", len);
    
    
    msg = "";
    
    len = asm_strlen(msg);
    printf("(Empty)len : %ld\n", len);
    
    len = asm_strlen("");
    printf("(Empty)len : %ld\n", len);
    
    
}


int main() {
    test_strlen();
    
}

//nasm -f elf64 ft_strlen.s -o lenstr.o
// gcc main.c lenstr.o -o main
// ./main