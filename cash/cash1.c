#include <stdio.h>
#include <math.h>

int getValue(void);
int coins(int rupees);

int main(void)
{
    // Make sure the user prompts a valid value
    int owed = getValue();
    
    // Prints how many coins/notes are needed
    printf("%d\n", coins(owed));
}

// Counts the least number of coins needed to cover change
int coins(int change)
{
    int coins = 0;
    
    // Loops decreasing rupees by the biggest coin possible until rupees = 0
    while (change > 0)
    {
        if (change >= 20)
        {
            change -= 20;
            coins++;
        }
        else if (change >= 10)
        {
            change -= 10;
            coins++;
        }
        else if (change >= 5)
        {
            change -= 5;
            coins++;
        }
        else if (change >= 1)
        {
            change -= 1;
            coins++;
        }
    }
    return coins;
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
    }
    while (change < 0.00);

    return change;
}