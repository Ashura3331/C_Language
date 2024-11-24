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
void multiplyArray(int array[ROWS][COLS], int multiplier, int result[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            result[i][j] = array[i][j] * multiplier;
        }
        
    }
    
}


// Function to print a 2D array
void printArray (int array[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
        
    }
    
}




int main() {

    int array1[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[ROWS][COLS] {
        {9, 8, 7},
        {6, 5, 4}, 
        {3, 2, 1}
    };

    int result[ROWS][COLS];

    int largest = findLargest(array1);
    printf("The larget number in the array is: %d\n\n", largest);

    multiplyArray(array2, largest, result);

    printf("The result array after multiplicaton is : \n");
    printArray(result);

    return 0;
}