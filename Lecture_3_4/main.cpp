/*
    Task: Translate a number from decimal to binary.
*/

#include<math.h>
#include<stdio.h>

int main()
{
    printf("Enter the number N: ");
    int n,answer = 0;
    scanf("%d", &n);
    for(int i=0; n>0; ++i)
    {
        answer += (n%2)*pow(10,i);
        n/=2;
    }
    printf("Answer: %d\n",answer);
}
