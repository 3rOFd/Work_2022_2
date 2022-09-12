/*
    Task: the sum of the row with an accuracy of 10^-5, where 0.05 < x < 1
*/

#include"factorial.h"
#include<math.h>
#include<stdio.h>


int main()
{
    printf("Enter the x in the range 0.05 < x < 1: ");
    double x;
    double result = 1;
    double eps = 0.00001;
    scanf("%lf", &x);
    if(x <= 0.05 || x >= 1) printf("Error");
    else
    {
        int n = 1;
        double amount = x;
        int first = 1;
        int second = 1;
        factorial(result, eps, n, amount, first, second , x);
    }
}
