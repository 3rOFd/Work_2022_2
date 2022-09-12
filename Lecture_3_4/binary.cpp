#include"binary.h"
#include<cmath>
#include<stdio.h>
void to_binary(int n, int answer, int i)
{
    while(n > 0)
    {
        answer += (n % 2) * pow(10, i);
        n >>= 1;
        ++i;

    }
    printf("Answer: %d\n", answer);
}
