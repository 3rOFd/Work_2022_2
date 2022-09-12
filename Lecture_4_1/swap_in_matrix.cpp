#include"swap_in_matrix.h"
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void entry(int* M, int size)
{

    for(int i = 0; i < 40; ++i)
    {
       printf("%d ", *(M + i));

    }
}

void print_matrix(int* M, int max, int last_negative, int size)
{
    int tmp = M[max];
    M[max] = M[last_negative];
    M[last_negative] = tmp;
    for(int i = 0; i < 40; ++i)
    {
        printf("%d ", *(M + i));

    }
}
