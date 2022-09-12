/*
    Task: Swap the digits of the high and low digits of a given natural number (for example, from the number 3879 you get 9873)
*/

#include"swap.h"
#include<math.h>
#include<stdio.h>

int main()
{
    printf("Enter the number N: ");
    int N;
    int i = 0;
    scanf("%d", &N);
    int P = N;
    int k = 0;
    while(P > 0)
    {
        P /= 10;
        if(P % 10 == 0) ++k;
        ++i;

    }
    int x = N % 10;
    int y = N / (pow(10, i - 1));
    int midle = (N - y * pow(10, i - 1)) / 10;
    response(x, y, i, k, midle);
    return 0;

}
