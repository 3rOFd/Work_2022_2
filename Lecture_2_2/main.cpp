/*
    Task: Write a program that determines the area of which figure is larger: a circle of radius R,
          an equilateral triangle with side length a, or a square with side length d. (using ?:).
*/
#include <stdio.h>
#include<math.h>


int main()
{
   double R,a,d;
   printf(" Enter the length of the radius, then the length of the side of the triangle, and then\n "
          "the length of the side of the square and we will find out which figure has the largest area: ");
   scanf("%lf %lf %lf",&R,&a,&d);
   double S_c, S_t, S_s;
   S_c = M_PI*pow(2,R);
   S_t=pow(2,a) * sin(M_PI/3);
   S_s=d*d;
   printf("Answer: %s\n",(S_c==S_s&&S_c==S_t&&S_s==S_t)?"areas are the same": (S_c>S_t&&S_c>S_s)?"circle":(S_t>S_s)? "triangle":"square");
}
