#include <stdio.h>
#include <math.h>

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
    while (change >= 20)
    {
        change -= 20;
        coins++;
    }
    while (change >= 10)
    {
        change -= 10;
        coins++;
    }
    while (change >= 5)
    {
        change -= 5;
        coins++;
    }
    while (change >= 1)
    {
        change -= 1;
        coins++;
    }

    printf("%i\n", coins);
}