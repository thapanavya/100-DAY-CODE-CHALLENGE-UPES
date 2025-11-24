//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

#include <stdio.h>
int main() {
    int i, j, spaces, num;
    for (i = 1; i <= 5; i++) {
        for (spaces = 5 - i; spaces > 0; spaces--) {
            printf(" ");
        }
        num = 6 - i;    
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}

