/*
 * Experiment No: 11
 * Aim: Accept elements of integer, float and character arrays and
 *      display the value and memory address of each element.
 */
#include <stdio.h>

int main() {
    int intArr[5];
    float floatArr[5];
    char charArr[5];
    int i;

    // Input integer array
    printf("Enter 5 integer elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &intArr[i]);
    }

    // Input float array
    printf("Enter 5 float elements: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &floatArr[i]);
    }

    // Input character array
    printf("Enter 5 characters: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &charArr[i]);
    }

    // Display integer array values and addresses
    printf("\nInteger Array:\n");
    for (i = 0; i < 5; i++) {
        printf("Value = %d\tAddress = %p\n", intArr[i], (void *)&intArr[i]);
    }

    // Display float array values and addresses
    printf("\nFloat Array:\n");
    for (i = 0; i < 5; i++) {
        printf("Value = %.2f\tAddress = %p\n", floatArr[i], (void *)&floatArr[i]);
    }

    // Display character array values and addresses
    printf("\nCharacter Array:\n");
    for (i = 0; i < 5; i++) {
        printf("Value = %c\tAddress = %p\n", charArr[i], (void *)&charArr[i]);
    }

    return 0;
}
