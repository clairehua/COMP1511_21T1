// author
// date
// description

#include <stdio.h>

// prototypes
int is_even(int number);

int main(void) {
    // call our function
    int input = 4;

    printf("Input 4 returned: %d\n", is_even(input));
    is_even(9);
    is_even(8);
    is_even(200);
    return 0;
}

// checks if a number is even
// returns 1 if even, else returns 0
int is_even(int num) {
    if (num % 2 == 0) {
        // even
        printf("even\n");
        return 1;
    } else {
        printf("odd\n");
        return 0;
    }
}

