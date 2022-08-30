/*
    Task: Find the smallest common divisor of three natural numbers
    (1 will be considered the smallest common divisor only if the given numbers have no other common divisors).
*/

#include<stdio.h>

int main()
{
    printf("Please enter x, then y and z: ");
    int x, y, z;
    scanf ("%d %d %d", &x, &y, &z);
    if(x <= 0 || y <= 0 || z <= 0) printf("Error");
    else
    {
        int n = x > y && x > z ? x : y > z ? y : z;
        /*
            Often the smallest common divisor is found in the initial stages of number decomposition,
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
