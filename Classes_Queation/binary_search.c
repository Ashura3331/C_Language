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

    int array[] = {2, 3, 7, 9, 13, 15, 21, 31, 33, 99};
    int size = sizeof(array) / sizeof(array[0]);
    int target;

    printf("Enter the number of search: ");
    scanf("%d\n", &target);

    int result = binarySearch(array, size, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    }else {
        printf("Element not found\n");
    }
 
    return 0;
}