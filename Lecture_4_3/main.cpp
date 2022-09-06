/*
    A matrix of size 7x7 is given. Swap the k-th column with the k-th row.
*/

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

    return 0;
}
