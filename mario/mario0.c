#include <stdio.h>

int main(void) 
{   
    // static
    printf("????\n");

    // dynamic
    for (int i = 0; i < 4; i ++) {
        printf("?");
    }

    // dynamic (to end in next line)
    printf("\n");
}