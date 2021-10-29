#include<stdio.h>

int main(void)
{
    // get input from user
    int cash;
    printf("Enter the amount of cash you have: ");
    scanf("%d", &cash);

    // calculate the number of $20 bills
    int twenty = cash / 20;
    // calculate the number of $10 bills
    int ten = (cash % 20) / 10;
    // calculate the number of $5 bills
    int five = ((cash % 20) % 10) / 5;
    // calculate the number of $1 bills
    int one = (((cash % 20) % 10) % 5) / 1;

    // calculate sum of bills
    int sum = twenty * 20 + ten * 10 + five * 5 + one * 1;

    // print the results
    printf("You have %d $20 bills, %d $10 bills, %d $5 bills, and %d $1 bills.\n", twenty, ten, five, one);
}