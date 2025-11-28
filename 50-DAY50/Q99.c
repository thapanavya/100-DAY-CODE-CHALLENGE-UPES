//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
int main(){
    char date[20];
    gets(date);  
    date[3]='A'; date[4]='p'; date[5]='r'; date[6]='-';
    printf("%s", date);
}

