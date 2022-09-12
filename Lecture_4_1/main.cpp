/*
    Swap the maximal and the last negative elements of the array M(40)
*/

#include"swap_in_matrix.h"
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    constexpr int size = 40;
    int M[size];
    srand(time(nullptr));
    int last_negative;
    int max = 0;
    //initial values
    for(int i = 0; i < 40; ++i)
    {
       M[i] = rand() % 201 - 100; //range -100 to 100

    }
    entry(M, size);
    printf("\n");
    //calculated values
    for(int i = 0; i < 40; ++i)
    {
       if(M[i] < 0)
       {
           last_negative = i;
       }
       if(M[i] > M[max])
       {
           max = i;
       }

    }

    print_matrix(M, max, last_negative, size);
    return 0;
}
