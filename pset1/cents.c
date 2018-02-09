/*This calculates the minimum number of coins required to make change of the inputed amount*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float amount;
    do
    {
        printf("How much change is owed? :");
        amount = get_float();
    }
    while (amount < 0);
    /*Collects the change amount*/

    float cents = roundf(amount * 100);
    int coins = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        coins = coins + 1;
    };
    while (cents >= 10)
    {
        cents = cents - 10;
        coins = coins + 1;
    };
    while (cents >= 5)
    {
        cents = cents - 5;
        coins = coins + 1;
    };
    while (cents > 0)
    {
        cents = cents - 1;
        coins = coins + 1;
    };
    printf("%d coins\n", coins);
}
