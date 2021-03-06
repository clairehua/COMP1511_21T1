// sum_digits.c which reads characters from its input
// When the end of input is reached it should print a count of the number of 
// digits in its input and their sum.

// The only functions you can use are getchar() and printf().


#include <stdio.h>

int main(void) {
    // declare variables
    // my char variable
    int c; 
    
    int sum = 0; 
    int total_seen = 0;

    // NOTE:
    // getchar returns an int which will contain either
    // the ASCII code of the character read or EOF


    // TODO: read in characters and update our variables
    
    // get in our first char
    c = getchar();
    while (c != EOF) {
        // check if it is a digit then add to sum
        if (c >= '0' && c <= '9') {
            // bring the numbers back to 0
            // 1 == 49 ... we want it to equal 1
            c = c - '0';
            
            sum = sum + c;
            total_seen++;
        }
        c = getchar();
    }
    
    
    
    printf("Input contained %d digits which summed to %d\n", total_seen, sum);
    
    return 0;
}
