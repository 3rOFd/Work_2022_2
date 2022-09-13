/*
    A matrix of size 7x7 is given. Swap the k-th column with the k-th row.
*/

#include"Swap_clmn_with_row.h"
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    constexpr int first = 7;
    constexpr int second = 7;
    int M[first][second];
    srand(time(nullptr));
    for(int i = 0; i < 7; ++i)
    {
       for(int j = 0; j < 7; ++j)
       {
           M[i][j] = rand() % 10;
           printf("%d ", M[i][j]);
       }
       printf("\n");
    }

    printf("select the column number, which will swap with a row of the same number: ");
    int s, c;
    scanf("%d", &s);
    if(s > 7)
    {
        printf("Error");
        return 1;
    }
    --s;
    c = s;
    int j = 0;
    swap_in_matrix(c, s, j, M);

    return 0;
}
