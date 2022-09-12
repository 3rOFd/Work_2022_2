#include"swap.h"
#include<stdio.h>

void response(int x, int y, int i, int k, int midle)
{
    if(k > 1)
    {
        printf("Answer: %d", x);
        while(k > 1)
        {
            printf("0");
            --k;

        }
        printf("%d\n", y);

    }
    else if(i == 2)
    {
        printf("Answer: %d%d\n", x, y);

    }
    else if(i == 1)
    {
        printf("Answer: %d", i);

    }
    else
    {
        printf("Answer: %d%d%d\n", x, midle, y);

    }
}
