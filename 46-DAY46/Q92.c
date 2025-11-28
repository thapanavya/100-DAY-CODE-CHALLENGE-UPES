//Find the first repeating lowercase alphabet in a string. 
#include <stdio.h>
int main() {
    char str[100], freq[26]={0};
    int i;
    gets(str);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            freq[str[i]-'a']++;
            if(freq[str[i]-'a'] == 2){
                printf("First repeating: %c", str[i]);
                return 0;
            }
        }
    }
    printf("No repeating character");
}

