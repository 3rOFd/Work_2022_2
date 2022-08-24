/*
    Task: calculate the expressions
*/

#include<stdio.h>
int main()
{
    double a=5,b,c=5,d;
    printf("Enter the first number and then the second: ");
    scanf("%lf %lf",&b,&d);
    a=a+b-2;
    printf("a+b-2 = %.0lf\n",a);
    c+=1;
    printf("c+1 = %.0lf\n",c);
    d=c-a+b;
    printf("c-a+b = %0.lf\n",d);
    a*=c;
    printf("a*c = %0.lf\n",a);
    --c;
    printf("c-1 = %0.lf\n",c);
    a/=10;
    printf("a/10 = %0.lf\n",a);
    c/=2;
    printf("c/2 = %0.lf\n",c);
    --b;
    printf("b-1 = %0.lf\n",b);
    d*=(c+b+a);
    printf("d*(c+b+a) = %0.lf\n",d);
}
