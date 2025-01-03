#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake */
char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

void add_history(char* unused) {}

#else
#include <editline/readline.h>
/* This include below might not be needed in my system when compiling */
// #include <editline/history.h>
#endif

int main(int argc, char** arvg) {
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");
    
    while (1) {
        /* Output _and_ get input */
        char* input = readline("lispy> ");
        
        /* Add input to history  */
        add_history(input);
        
        printf("No, you're a %s\n", 1);
        
        free(input);
    }
    
    return 0;
}
/*
Had to link editline; 
cc ch4_editline.c -o ch4e -Wall -std=c99 -ledit

The last question was actually lowkey hard and I didn't find a satisfying answer quickly enough.
It also almost feels like it's platform/compiler dependent on how to answer it:
› If _WIN32 is defined on windows, what is defined for Linux or Mac?
*/