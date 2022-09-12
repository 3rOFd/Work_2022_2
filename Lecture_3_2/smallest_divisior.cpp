#include "smallest_divisior.h"
#include<stdio.h>
void smallest_divisior(int x, int y, int z)
{
    if(x <= 0 || y <= 0 || z <= 0) printf("Error");
    else
    {
        int n = x > y && x > z ? x : y > z ? y : z;
        /*
            Ofte the smallest common divisor is found in the initial stages of number decomposition,
            the larger the numbers become, the less likely to meet the smallest common divisor,
            if it is found, the counter will still go to the largest number, which eliminates the loss

        */
        int k = 0;
        for(int i = 1; i < n; ++i)
        {
            if(x % i == 0 && y % i == 0 && z % i == 0) k = i;
        }
        printf("Answer: %d\n", k);
    }

}
