#include"Determine.h"
#include<stdio.h>
void calculation(int* A, int* B, int size_A, int size_B)
{
    for(int i = 0; i < size_A; ++i)
    {
        bool compare = false;
        for(int j = 0; j < size_B; ++j)
        {
            if(*(A + i) == *(B + j))
            {
                compare = true;
                break;
            }
        }
        if(!compare)
        printf("%d ", i);

    }
}
