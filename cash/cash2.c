#include <stdio.h>
#include <math.h>

int getValue(void);
int coins(int rupees);

int main(void)
{
    int change;
    do
    {
        printf("change owed: ");
        scanf("%i", &change);
    }
    while (change < 0);

    int coins = 0;

    int availableCoins[] = {20, 10, 5, 1};
    // Loops decreasing rupees by the biggest coin/note possible until rupees = 0
    while (change > 0)
    {
        for (int i = 0; i < 4; i++)
        {
            if (change >= availableCoins[i])
            {
                change -= availableCoins[i];
                coins++;
                break;
            }
        }
    }

    printf("%i\n", coins);
}
