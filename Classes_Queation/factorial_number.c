#include <stdio.h>

int factorialRecursion (int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorialRecursion(n -1);
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
    
}