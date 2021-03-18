// Pointer code by Catherine Cheng z5310517 
// Written for H13C Tute05 on 18-03-2021
#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int main(void){
    
    // VARIABLES
    // Declaration of a variable
    int a;
    
    
    
    // Initialisation of a variable
    a = 5;
    
    // print memory address
    printf("%p\n", &a);
    
    // & stands for "address of"

     

    // QUESTION 7 - POINTERS
    // What is a pointer?
    // - Variable that stores a memory address of another   variable
    // - always aimed at a particular variable type
    
    
    // Declaration of a pointer
    int *pointer;
    
    // Initialisation of a pointer
    pointer = &a;
    
    
    // star* - when to use
    //- multiply 3*4
    //- commenting "/*"
    //- declare a pointer - int *a
    //- dereference pointers
    
    
    
    // Dereferencing pointers 
    // when we want to access the thing the pointer is pointing to
    
   
    // printing value of a
    printf("%d\n", a);
    printf("%d\n", *pointer);
    
    
    // printing address
    printf("%p\n", pointer);
    printf("%p\n", &a);
    

    
    //QUESTION 8 
    // Why did we have to always include the & symbol in our arguments given to scanf?
    int b;
    scanf("%d", &b);
    
    // & - address of 
    // passing by reference
    
    
    //Q10
    int total;
    sum_nums(1,2, &total);
    printf("%d\n", total);
    
}

    // QUESTION 10
    // Write a void function which places the sum of two numbers inside a variable
    // passed in by reference. It should have the following prototype
void sum_nums(int a, int b, int *sum) {
  *sum = a + b;

}
    
    // QUESTION 11
    // Write an int *function which returns the address of the greater of two 
    // integers passed by reference. It should have the following prototype:
int *max(int *a, int *b){
    if (*a >= *b) {
        return a; 
    } else {
        return b;
    }
    
}
