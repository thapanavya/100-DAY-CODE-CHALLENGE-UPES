//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student *s;

    s = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter name and roll: ");
    scanf("%s %d", s->name, &s->roll);

    printf("Stored: %s %d\n", s->name, s->roll);

    free(s);
    return 0;
}

