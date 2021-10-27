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
int coins(int rupees)
{
    int count = 0;
    
    // Loops decreasing rupees by the biggest coin possible until rupees = 0
    while (rupees > 0)
    {
        if (rupees >= 100)
        {
            rupees -= 100;
            count++;
        }
        else if (rupees >= 50)
        {
            rupees -= 50;
            count++;
        }
        else if (rupees >= 20)
        {
            rupees -= 20;
            count++;
        }
        else if (rupees >= 10)
        {
            rupees -= 10;
            count++;
        }
        else if (rupees >= 5)
        {
            rupees -= 5;
            count++;
        }
        else if (rupees >= 1)
        {
            rupees -= 1;
            count++;
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
    }
    while (change < 0.00);

    return change;
}