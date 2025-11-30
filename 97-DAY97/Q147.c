//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e1 = {"Sunghoon", 201, 45000.50}, e2;

    fp = fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Name: %s\nID: %d\nSalary: %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}

