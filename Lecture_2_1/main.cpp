/*
    Task: write a program to calculate a formula (Lecture 2, photo)
*/
#include<stdio.h>
#include<math.h>
int main()
{
    double Y,x,y1,y2;
    //For ease of reading, I will write out the divisible and divide separately
    printf("Enter the argument x: ");
    scanf("%lf",&x);
    if (x<=1) printf("Error");
    else
    {
        y1=2*cos(x-M_PI/6)+sqrt(2);
        y2=1/(2*log(x))+sin(pow(2,x))*sin(pow(2,x));
        Y=y1/y2*exp(3*x);
        printf("Answer: %lf\n",Y);
    }
}
