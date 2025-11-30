//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

enum Signal { RED, YELLOW, GREEN };

int main() {
    enum Signal light = RED;

    if(light == RED)
        printf("Stop\n");
    else if(light == YELLOW)
        printf("Wait\n");
    else
        printf("Go\n");

    return 0;
}

