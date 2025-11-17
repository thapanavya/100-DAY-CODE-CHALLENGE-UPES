//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main() {
    int num, original, first, last, digits = 0, mid;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    last = num % 10;
    while (num >= 10) {
        num = num / 10;
        digits++;
    }
    first = num;
    mid = (original % (int)pow(10, digits)) / 10;
    int swapped = (last * (int)pow(10, digits)) + (mid * 10) + first;
    printf("Swapped number: %d\n", swapped);
    return 0;
}

