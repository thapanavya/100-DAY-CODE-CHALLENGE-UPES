//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int num, digit;
    int freq[10] = {0}; 
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) {
            maxDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", maxDigit);

    return 0;
}

