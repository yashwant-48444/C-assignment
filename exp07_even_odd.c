/*
 * Experiment No: 7
 * Aim: Check whether a given number is even or odd.
 */
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d is Even\n", number);
    } else {
        printf("%d is Odd\n", number);
    }

    return 0;
}
