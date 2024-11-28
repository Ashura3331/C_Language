#include <stdio.h>

int binarySearch(int array[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = left + (right -left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (array[mid] < target) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }
    

    return -1;
}



int main() {


    return 0;
}