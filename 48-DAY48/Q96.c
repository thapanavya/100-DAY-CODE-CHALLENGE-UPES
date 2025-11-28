//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main(){
    char str[200];
    int i;
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            printf(" ");
        } else {
            int j=i;
            while(str[j]!=' ' && str[j]!='\0') j++;
            int k=j-1;
            while(k>=i) printf("%c", str[k--]);
            i=j-1;
        }
    }
}

