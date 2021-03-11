// author
// date
// description

#include <stdio.h>

int main(void) {
    // read in numbers until a non number is read
    // over and over =  while loop
    
    int variable;
    int result = scanf("%d", &variable);
    while (result == 1) {
        // keep going
        // increment
        result = scanf("%d", &variable);
    }
    
    // print goodbye
    printf("Goodbye\n");
    
    return 0;
}
