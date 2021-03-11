// more advanced scanf

#include <stdio.h>

int main(void) {
    // read in numbers until a non number is read
    // over and over =  while loop
    
    int variable;
    
    /*int result = scanf("%d", &variable);
    while (result == 1) {
        // keep going
        // increment
        result = scanf("%d", &variable);
    } */
    

    while (scanf("%d", &variable) == 1) {
        // nothing
    }
    
    // print goodbye
    printf("Goodbye\n");
    
    return 0;
}
