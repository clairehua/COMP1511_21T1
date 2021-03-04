// Program that counts from 1 to n
// COMP1511 H13C

#include <stdio.h>

int main(void) {
    // prompt the user
    printf("Enter finish: ");
    // receive input from user
    int n;
    scanf("%d", &n);
        
    // print output
    int i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i = i + 1;
    }
    
    return 0;
}
