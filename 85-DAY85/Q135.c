//Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Numbers { ONE = 10, TWO, THREE, FOUR };

int main() {
    printf("ONE = %d\nTWO = %d\nTHREE = %d\nFOUR = %d\n", ONE, TWO, THREE, FOUR);
    return 0;
}

