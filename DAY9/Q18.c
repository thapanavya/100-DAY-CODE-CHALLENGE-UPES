//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.

#include <stdio.h>

int main() {
    int percentage;
    char grade;
    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);
    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage <= 89) {
        grade = 'B';
    } else if (percentage >= 70 && percentage <= 79) {
        grade = 'C';
    } else if (percentage >= 60 && percentage <= 69) {
        grade = 'D';
    } else if (percentage >= 0 && percentage < 60) {
        grade = 'F';
    } else {
        printf("Invalid percentage entered!\n");
        return 0;
    }
    
    printf("Your grade is: %c\n", grade);

    return 0;
}

