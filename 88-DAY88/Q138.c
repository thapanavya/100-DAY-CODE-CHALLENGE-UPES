//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Days { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    enum Days d;

    for(d = SUN; d <= SAT; d++) {
        printf("%d -> ", d);

        switch(d) {
            case SUN: printf("SUN\n"); break;
            case MON: printf("MON\n"); break;
            case TUE: printf("TUE\n"); break;
            case WED: printf("WED\n"); break;
            case THU: printf("THU\n"); break;
            case FRI: printf("FRI\n"); break;
            case SAT: printf("SAT\n"); break;
        }
    }
    return 0;
}

