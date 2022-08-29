/*
    Task: Translate a number from decimal to binary.
*/

#include<math.h>
#include<stdio.h>


int main()
{
    printf("Enter the x in the range 0.05<x<1: ");
    double x, eps = 1e-5;
    double result = 0;
    double amount = 0;
    scanf("%lf", &x);

    if(x < 0.05 || x > 1) printf("Error");
    else
    {
        int n = 1;
       //amount += x;
        while(true)
        {
            auto divided = ((2 * n - 1) * pow(x, 2 * n + 1));
            auto divider = double(((2 * n) * (2 * n + 1)));
            result = divided / divider;
            if(result < eps) break;
            amount += result;
            ++n;
        }
        printf("Answer: %lf\n", amount);
    }
}
