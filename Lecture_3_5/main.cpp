/*
    Task: the sum of the row with an accuracy of 10^-5, where 0.05<x<1
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

    if(x <= 0.05 || x >= 1) printf("Error");
    else
    {
        int n = 1;
        double last_value_even = 1;
        double last = 1;
        double second_last_even = 1;
        double l_last = 1;
        while(true)
        {
            if(n % 2 == 0)
            {
                auto divided = ((2 * n - 1) * last_value_even * pow(x, 2 * n + 1));
                auto divider = double(((2 * n) * last * (2 * n + 1)));
                result = divided / divider;
                last_value_even = 2 * n - 1;
                last = 2 * n;
                if(result < eps) break;
                amount += result;
                ++n;
            }
            else
            {
                auto divided = ((2 * n - 1) * second_last_even * pow(x, 2 * n + 1));
                auto divider = double(((2 * n) * l_last * (2 * n + 1)));
                result = divided / divider;
                second_last_even = 2 * n - 1;
                l_last = 2 * n;
                if(result < eps) break;
                amount += result;
                ++n;
            }
        }
        printf("Answer: %lf\n", amount);
    }
}
