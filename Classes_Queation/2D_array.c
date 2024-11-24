#include <stdio.h>

#define ROWS 3
#define COLS 3

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






int main() {



    return 0;
}