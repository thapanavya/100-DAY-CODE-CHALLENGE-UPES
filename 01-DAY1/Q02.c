//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int num1, num2;
    int sum, diff, prod, quotient;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", prod);

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient = %d\n", quotient);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

