#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the number a: ");
    scanf("%d", &a);

    printf("Enter the number b: ");
    scanf("%d", &b);

    printf("Enter the number c: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("The largest number is: %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("The largest number is: %d\n", b);
    }
    else {
        printf("The largest number is: %d\n", c);
    }

    return 0;
}

