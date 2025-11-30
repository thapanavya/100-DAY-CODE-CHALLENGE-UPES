//Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Test { A = 5, B, C = 10, D };

int main() {
    printf("A = %d\nB = %d\nC = %d\nD = %d\n", A, B, C, D);
    return 0;
}

