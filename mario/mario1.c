#include <stdio.h>

int main(void)
{
    int width;
    do
    {
        printf("Enter an integer: ");
        scanf("%i", &width);
    } while (width < 0 );

    for (int i = 0; i < width; i ++) {
        printf("?");
    }

    printf("\n");
}