// echo_twice.c reads lines from its input and prints them twice.

// The only functions you can use are fgets and printf. 
// You can assume lines contain at most 4096 characters.

#include <stdio.h>

// maximum number of characters (given)
#define MAX_LINE 4096

int main(void) {
    // TODO: read in lines and print them twice
    
    // declare a char array (buffer)
    char string[MAX_LINE];
    
        
    while (fgets(string, MAX_LINE, stdin) != NULL) {
        printf("%s", string);
        printf("%s", string);
    }
    
    return 0;
}
