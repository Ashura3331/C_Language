#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to find the largest number in a 2D array
int findLargest(int array[ROWS][COLS]) {
    int largest = array[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (array[i][j] > largest) {
                largest = array[i][j];
            }
        }
        
    }
    return largest;
}

// Function to multiply a 2D array by a scalar
int multiplyArray(int arr[ROWS][COLS], int multiplier, int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; i++)
        {
            result[i][j] = array[i][j] * multiplier;
        }
        
    }
    
}




int main() {



    return 0;
}