//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month { JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    enum Month m;

    for(m = JAN; m <= DEC; m++) {
        printf("Month %d has ", m);
        if(m==APR||m==JUN||m==SEP||m==NOV) printf("30 days\n");
        else if(m == FEB) printf("28 or 29 days\n");
        else printf("31 days\n");
    }
    return 0;
}

