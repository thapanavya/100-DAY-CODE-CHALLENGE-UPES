//Write a program to check if a number is a perfect number.
#include <stdio.h>
int main() {
    int num, n, first, last, digits = 0, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    last = n % 10;
    while (n >= 10) {
        n = n / 10;
        digits++;
        power *= 10;
    }
    first = n;
    int middle = (num % power) / 10;
    int swapped = last * power + middle * 10 + first;
    printf("After swapping first and last digit: %d\n", swapped);
    return 0;
}

