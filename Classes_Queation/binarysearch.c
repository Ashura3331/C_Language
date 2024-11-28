
#include <stdio.h>

int binarySearch(int array[], int size, int target) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (array[mid] == target) {
            return mid;
        }
        if (array[mid] <  target) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {

int array[] = {1, 3, 5, 7, 9, 13, 15, 19, 27, 33, 99};
int size = sizeof(array) / sizeof(array[0]);
int num;

printf("Enter your number: ");
scanf("%d", &num);

int result = binarySearch(array, size, num);
if (result != -1) {
    printf("Element found at index: %d\n", result);
}else {
    printf("Element not found\n");
}





    return 0;
}