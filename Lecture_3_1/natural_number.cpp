#include"natural_number.h"
#include<stdio.h>
int natural_number(int N)
{
    int amount = 0;
    if(N <= 0)
    {
        printf("Error");

    }
    else
    {        
        while(N > 0)
        {
            ++amount;
            N /= 10;
        }

    }
    return amount;
}
