/*
 * Experiment No: 12
 * Aim: Accept elements of a one-dimensional array and
 *      calculate the sum of all its elements.
 */
#include <stdio.h>

int main() {
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid number of elements!\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("Sum of the array elements = %d\n", sum);

    return 0;
}
