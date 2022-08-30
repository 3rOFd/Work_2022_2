/*
    Task: Translate a number from decimal to binary.
*/

#include<math.h>
#include<stdio.h>

int main()
{
    printf("Enter the number N: ");
    int n, answer = 0;
    scanf("%d", &n);
    int i = 0;
    while( n > 0)
    {        
        answer += (n % 2) * pow(10, i);
        n >>= 1;
        ++i;

    }
    printf("Answer: %d\n", answer);
}
