#include <stdio.h>

#define SIZE 7

// Takes a 2D array of ints and multiplies every value in the array by a given int
// void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar);

// prototypes
void print_map(int map[SIZE][SIZE]);
void scalar_multiply(int rows, int columns, int matrix[rows][columns], 
                     int scalar);
                     
                     
                     
int main(void) {
    int row, column;

    // prints out square to terminal
    
    /*
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("0");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    } */
    
    
    // initialise array
    
    // type name[size][size]
    
    int two_d_array[SIZE][SIZE];
    
    // filling up the array
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            // printf("0");
            two_d_array[row][column] = 1;
            column = column + 1;
        }
        
        row = row + 1;
    }
    
    // print the array
    print_map(two_d_array);
    
    scalar_multiply(SIZE, SIZE, two_d_array, 4);

    print_map(two_d_array);
    
    return 0;
}


// Code borrowed from COMP1511 Assignment 1 - Slide.c
// Print out the contents of the map array. 

void print_map(int map[SIZE][SIZE]) {
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            printf("%d ", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

//comment
void scalar_multiply(int rows, int columns, int matrix[rows][columns], 
                     int scalar) {
    int row, column;
       
    row = 0;
    while (row < rows) {
        column = 0;
        while (column < columns) {
            matrix[row][column] = matrix[row][column] * scalar; 
            column = column + 1;
        }
        
        row = row + 1;
    }
}














