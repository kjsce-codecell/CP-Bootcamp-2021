#include <stdio.h>
#include <math.h>

int getValue(void);
int coins(int rupees);

int main(void)
{
    // Make sure the user prompts a valid value
    int owed = getValue();

    // Prints how many coins are needed, breaks line
    printf("%d\n", coins(owed));
}

// Counts the least number of coins/notes needed to cover change
int coins(int rupees)
{
    int count = 0;

    int mark[6] = {100, 50, 20, 10, 5, 1};

    // Loops decreasing rupees by the biggest coin/note possible until rupees = 0
    while (rupees > 0)
    {
        for (int i = 0; i < 6; i++)
        {
            if (rupees >= mark[i])
            {
                rupees -= mark[i];
                count++;
                break;
            }
        }
    }

    return count;
}

// Prompts user for a valid change value
int getValue(void)
{
    // Change is initialized before the loop otherwise while won't get it
    int change;
    do
    {
        printf("Enter an integer: ");
        scanf("%i", &change);
    } while (change < 0);

    return change;
}