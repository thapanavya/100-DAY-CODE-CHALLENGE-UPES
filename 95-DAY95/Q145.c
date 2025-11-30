//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student topStudent(struct Student s[], int n) {
    int i, pos = 0;
    for(i = 1; i < n; i++)
        if(s[i].marks > s[pos].marks)
            pos = i;
    return s[pos];
}

int main() {
    struct Student s[3] = {{"Jiwoo",1,78.5},{"Niki",2,92.0},{"Jay",3,85.5}};
    struct Student top = topStudent(s, 3);

    printf("Top Student: %s %.2f\n", top.name, top.marks);
    return 0;
}

