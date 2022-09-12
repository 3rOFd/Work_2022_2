/*
    Task: Translate a number from decimal to binary.
*/

#include"binary.h"
#include<math.h>
#include<stdio.h>

int main()
{
    printf("Enter the number N: ");
    int n;
    int answer = 0;
    scanf("%d", &n);
    int i = 0;
    to_binary(n, answer, i);
    return 0;
}
