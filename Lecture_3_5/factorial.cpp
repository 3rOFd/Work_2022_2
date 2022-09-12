#include"factorial.h"
#include<stdio.h>
#include<cmath>

void factorial(double result, double eps, int n, double amount, int first, int second ,double x)
{
    while(result > eps)
    {
        first *= (2 * n - 1);
        second *= 2 * n;
        result *= (first * pow(x,(2 * n + 1))) / (second * (2 * n + 1));
        amount += result;
        ++n;

    }

    printf("Answer: %lf\n", amount);
}
