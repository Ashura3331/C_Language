#include<stdio.h>


 int factorialRecursion (int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorialRecursion(n - 1);
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
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative number.\n");
    }else {
        int resultRecursion = factorialRecursion(num);
        printf("Facrial (using recursion): %d\n", resultRecursion);

        // Factorial using Iteraion
        int resultIteration = factorialIteration(num);
        printf("Factorial (using iteration): %d\n", resultIteration);
    }
   



    return 0;
}