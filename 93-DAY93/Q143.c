//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, pos = 0;

    for(i = 0; i < 5; i++) {
        printf("Enter name roll marks of student %d: ", i+1);
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for(i = 1; i < 5; i++)
        if(s[i].marks > s[pos].marks)
            pos = i;

    printf("\nTopper:\nName: %s\nRoll: %d\nMarks: %.2f\n",
           s[pos].name, s[pos].roll_no, s[pos].marks);

    return 0;
}

