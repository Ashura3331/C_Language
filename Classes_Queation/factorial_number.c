#include <stdio.h>

int factorialRecursion (int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursion(n-1);
}

int factorialIteration (int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
{
        result *= i;
    }
    return result;
    
}




int main() {

    int num;

    printf("Enter your number to find Factorial number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("The negative number don't have a factorial number.");
    }else {
        int resultRecursion = factorialRecursion(num);
        printf("Recursion (using recursion) : %d\n", resultRecursion);

        int resultIteration = factorialIteration(num);
        printf("Iteration (using iteration): %d\n", resultIteration);
    }




    return 0;
}