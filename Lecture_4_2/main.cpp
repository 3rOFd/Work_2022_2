/*
    Determine the location of elements of array A (30) that do not occur in array B (15)
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    constexpr int size_A = 30;
    int A[size_A];
    srand(time(nullptr));
    printf("matrix A data:\n");
    for(int i = 0; i < size_A; ++i)
    {
        A[i] = rand() % 11;
        printf("%d ", A[i]);
    }
    printf("\n\nmatrix B data:\n");
    constexpr int size_B = 15;
    int B[size_B];
    for(int i = 0; i < size_B; ++i)
    {
        B[i] = rand() % 11;
        printf("%d ", B[i]);
    }
    printf("\n\nThe numbers of matrix A that do not occur in matrix B:\n");

    for(int i = 0; i < size_A; ++i)
    {
        bool compare = false;
        for(int j = 0; j < size_B; ++j)
        {
            if(A[i] == B[j])
            {
                compare = true;
                break;
            }
        }
        if(!compare)
        printf("%d ", i);

    }
    return 0;
}
