/*
    Task: Find the smallest common divisor of three natural numbers
    (1 will be considered the smallest common divisor only if the given numbers have no other common divisors).
*/

#include"smallest_divisior.h"
#include<stdio.h>

int main()
{
    printf("Please enter x, then y and z: ");
    int x, y, z;
    int k = 0;
    scanf ("%d %d %d", &x, &y, &z);
    smallest_divisior(x, y, z);
    printf("Answer: %d\n", k);
}
