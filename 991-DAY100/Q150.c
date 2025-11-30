//Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s = {"Heeseung", 7};
    struct Student *ptr = &s;

    ptr->roll = 100; // modify using pointer

    printf("Name: %s\nRoll: %d\n", ptr->name, ptr->roll);
    return 0;
}

