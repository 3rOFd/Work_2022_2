/*
    Task: Swap the digits of the high and low digits of a given natural number (for example, from the number 3879 you get 9873)
*/

#include<math.h>
#include<stdio.h>

int main()
{
    printf("Enter the number N: ");
    int N,i = 0;
    scanf("%d",&N);
    int P = N,k = 0;
    for(; P>0; ++i)
    {
        P/=10;
        if(P%10 == 0) ++k;
    }
    int x = N%10;
    int y = N/(pow(10,i-1));
    int midle = (N-y*pow(10,i-1))/10;
    if(k>1)
    {
        printf("Answer: %d",x);
        for(; k>1; k--) printf("0");
        printf("%d\n",y);
    }
    else if(i == 2) printf("Answer: %d%d\n",x,y);
    else if(i == 1) printf("Answer: %d",i);
    else printf("Answer: %d%d%d\n",x,midle,y);

}
