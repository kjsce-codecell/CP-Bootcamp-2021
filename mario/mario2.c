#include <stdio.h>

int main(void)
{
    int size;
    do
    {
        printf("Enter an integer: ");
        scanf("%i", &size);
    } while (size < 0 );

    // For each row
    for (int i = 0; i < size; i++)
    {
        // For each column
        for (int j = 0; j < size; j++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }   
}