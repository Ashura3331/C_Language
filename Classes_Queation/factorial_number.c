#include<stdio.h>


 int factorialRecursive (int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorialRecursive(n - 1);
    }

    int factorialIteration(int n) {
        int result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }


int main() {

    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d, &num");

    
   



    return 0;
}