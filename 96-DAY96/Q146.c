//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date doj;
};

int main() {
    struct Employee e = {"Riki", 101, {15, 10, 2023}};

    printf("Name: %s\nID: %d\nJoining Date: %02d-%02d-%d\n",
           e.name, e.id, e.doj.day, e.doj.month, e.doj.year);

    return 0;
}

