//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
int main(){
    char s1[50], s2[50], temp[100];
    gets(s1); gets(s2);

    strcpy(temp, s1);
    strcat(temp, s1);

    if(strstr(temp, s2))
        printf("Rotation");
    else
        printf("Not Rotation");
}

