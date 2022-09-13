#include"Swap_clmn_with_row.h"
#include<stdio.h>

void swap_in_matrix(int c, int s, int j, int M[7][7])
{
    for(int i = 0; i < 7; ++i)
    {
            int temp = M[s][i];
            M[s][i] = M[j][c];
            M[j][c] = temp;
            ++j;
    }

    for(int i = 0; i < 7; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            printf("%d ", M[i][j]);
        }
          printf("\n");
    }
}
