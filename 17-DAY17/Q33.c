//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>
int main() {
    int num, original, remainder, n = 0;
    double sum = 0.0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;
    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, n);
        original /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}

