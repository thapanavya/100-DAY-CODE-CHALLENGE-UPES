//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 1, inWord = 0;

    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("File not found!");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;

        if(ch == '\n')
            lines++;

        if(isalnum(ch))
            inWord = 1;
        else if(inWord) {
            words++;
            inWord = 0;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}

