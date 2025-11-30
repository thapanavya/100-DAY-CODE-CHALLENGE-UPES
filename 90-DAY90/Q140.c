//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p = {"Jiwoo", FEMALE};

    printf("Name: %s\nGender: %s\n", 
           p.name, (p.g == FEMALE) ? "Female" : "Male");

    return 0;
}

