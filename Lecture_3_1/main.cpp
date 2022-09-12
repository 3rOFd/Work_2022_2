/*
    Task: Given a natural number N. Write a program to determine the number of digits in this number.
*/
#include"natural_number.h"
#include<stdio.h>

int main()
{
    printf("Please enter N: ");
    int N;
    scanf ("%d", &N);
    int amount = 0;
    natural_number(N, amount);
    return 0;
}
