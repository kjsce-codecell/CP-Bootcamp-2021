#include<stdio.h>

int main(void)
{
    // get input from user
    int change;
    do
    {
        printf("change owed: ");
        scanf("%i", &change);
    }
    while (change < 0);

    // calculate the number of Rs.20 bills
    int twenty = change / 20;
    // calculate the number of Rs.10 bills
    int ten = (change % 20) / 10;
    // calculate the number of Rs.5 bills
    int five = ((change % 20) % 10) / 5;
    // calculate the number of Rs.1 bills
    int one = (((change % 20) % 10) % 5) / 1;

    // calculate sum of bills
    int sum = twenty + ten + five + one;

    // print sum
    printf("%d\n", sum);
} 