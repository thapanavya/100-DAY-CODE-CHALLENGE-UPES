//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    enum Operation op;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.ADD  2.SUBTRACT  3.MULTIPLY\nChoose: ");
    scanf("%d", &op);

    switch(op) {
        case ADD: printf("Result = %d\n", a + b); break;
        case SUBTRACT: printf("Result = %d\n", a - b); break;
        case MULTIPLY: printf("Result = %d\n", a * b); break;
        default: printf("Invalid choice");
    }
    return 0;
}

