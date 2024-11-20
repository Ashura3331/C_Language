#include <stdio.h>
int main() {
    int money;

    printf("Enter your number: ");
    scanf("%d", &money);

    if (money >= 10000) {
        printf("Gucci Bag");
        if (money > 20000) {
            printf("Gucci Belt\n");
        }
    }else if (money >= 5000) {
        printf("Levis Bag");
    } else {
        printf("Something else\n");
    }


    return 0;
}