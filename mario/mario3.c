#include <stdio.h>

int main(void)
{
    int size;
    do
    {
        printf("Enter an integer: ");
        scanf("%i", &size);
    } while (size < 0 );

    // left aligned triangle
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            printf("#");
        }
        printf("\n");
    }

    // right aligned triangle
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row + col + 1 < size)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }    
}