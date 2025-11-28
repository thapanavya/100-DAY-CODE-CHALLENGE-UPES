//Reverse a string.
#include <stdio.h>
int main() {
    char str[100], rev[100];
    int i, j, len=0;
    gets(str);

    for(i=0; str[i]!='\0'; i++) len++;

    for(i=len-1, j=0; i>=0; i--, j++)
        rev[j] = str[i];
    rev[j] = '\0';

    printf("Reversed: %s", rev);
}

