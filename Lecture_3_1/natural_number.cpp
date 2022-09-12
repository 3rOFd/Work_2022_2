#include"natural_number.h"
#include<stdio.h>
void natural_number(int N, int amount)
{
    if(N <= 0)
    {
        printf("Error");

    }
    else
    {
        amount = 0;
        while(N > 0)
        {
            ++amount;
            N /= 10;
        }
        printf("Answer: %d\n", amount);
    }
}
