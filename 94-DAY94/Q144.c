//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

void display(struct Student st) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", st.name, st.roll, st.marks);
}

int main() {
    struct Student s = {"Niki", 23, 89.5};
    display(s);
    return 0;
}

