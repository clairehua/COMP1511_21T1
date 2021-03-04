// Program that prints n asterisks
// COMP1511 H13C

#include <stdio.h>

int main(void) {
    // prompt the user
    printf("Please enter an integer: ");
    // receive input from user
    int n;
    scanf("%d", &n);
        
    // print output
    int i = 0;
    
    while (i < n) {
        printf("*\n");
        i++; // i = i + 1
    }
    
    return 0;
}
