//Print initials of a name with the surname displayed in full.
#include <stdio.h>
int main(){
    char str[100];
    int i, last=0;
    gets(str);

    printf("%c.", str[0]);
    for(i=1; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i+1] != '\0'){
            last = i+1;
            printf("%c.", str[i+1]);
        }
    }
    printf(" %s", &str[last]);
}

