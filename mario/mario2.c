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
    for (int row = 0; row < size; row++)
    {
        // For each column
        for (int col = 0; col < size; col++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }   
}