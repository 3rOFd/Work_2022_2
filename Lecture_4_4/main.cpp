/*
    Calculate the sum of matrix elements to the left of the side diagonal.
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    constexpr int size_1 = 7;
    constexpr int size_2 = 7;
    int M[size_1][size_2];
    srand(time(nullptr));
    printf("Matrix data:\n");
    for(int i = 0; i < 7; ++i)
    {
        for(int j = 0; j < 7; ++j)
        {
            M[i][j] = rand() % 10;
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    int n = 6;
    int result = 0;
    for(int i = 0; i < 6; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            result += M[i][j];
        }
        --n;
    }
    printf("Answer: %d\n", result);
    return 0;
}
