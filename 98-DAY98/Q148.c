//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s1 = {"Jake", 10};
    struct Student s2 = {"Jake", 10};

    if(strcmp(s1.name, s2.name) == 0 && s1.roll == s2.roll)
        printf("Structures are identical\n");
    else
        printf("Structures are different\n");

    return 0;
}

