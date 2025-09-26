//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
int main() {
    long long binary, temp;
    int digit;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    temp = binary;
    printf("1's complement of %lld is ", binary);
    while (temp != 0) {
        digit = temp % 10;
        if (digit == 0)
            printf("1");
        else if (digit == 1)
            printf("0");
        else {
            printf("\nInvalid binary number!\n");
            return 1;
        }
        temp /= 10;
    }
    printf("\nNote: Digits are printed in reverse order.\n");
    return 0;
}

