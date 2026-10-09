/*
 * Experiment No: 1
 * Aim: Demonstrate basic I/O functions (scanf and printf) for
 *      different data types: int, float, double, char, string.
 */
#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char ch;
    char name[50];

    // Input section
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    printf("Enter a double value: ");
    scanf("%lf", &c);

    printf("Enter a single character: ");
    scanf(" %c", &ch); // space before %c skips leftover newline/whitespace

    printf("Enter a string (name): ");
    scanf("%49s", name); // no & needed, array name acts as address

    // Output section
    printf("\n--- Output ---\n");
    printf("Integer entered   : %d\n", a);
    printf("Float entered     : %.2f\n", b);
    printf("Double entered    : %.2lf\n", c);
    printf("Character entered : %c\n", ch);
    printf("String entered    : %s\n", name);

    return 0;
}
