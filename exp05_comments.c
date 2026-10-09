/*
 * Experiment No: 5
 * Aim: Demonstrate single-line and multi-line comments.
 */
#include <stdio.h>

int main() {
    // This is a single-line comment
    // It explains that the program prints a variable's value

    /* This is a multi-line comment.
       It can span across several lines.
       Here, we declare a variable and print its value. */

    int num = 10; // single-line comment: declaring and initializing a variable

    printf("The value of num is: %d\n", num);

    /* End of program.
       Comments do not affect program execution;
       they are purely for documentation purposes. */

    return 0;
}
