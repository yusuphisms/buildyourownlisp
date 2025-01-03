#include <stdio.h>

/* Declaring buffer for user input up to size 2048 */
static char input[2048];

int main(int argc, char** arvg) {
    puts("Lispy Version 0.0.1");
    puts("Press Ctrl+c to Exit\n");
    
    while (1) {
        fputs("lispy> ", stdout);
        
        /* Read user input  */
        fgets(input, 2048, stdin);
        
        printf("No, you're a %s", input);
    }
    
    return 0;
}