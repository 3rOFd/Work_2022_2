/*
    Task: Given a natural number N. Write a program to determine the number of digits in this number.
*/

#include<stdio.h>

int main()
{
    printf("Please enter N: ");
    unsigned int N;
    scanf ("%u",&N);
    int amount=0;
    while(N>0)
    {
        ++amount;
        N/=10;
    }
    printf("Answer: %d\n",amount);
}
