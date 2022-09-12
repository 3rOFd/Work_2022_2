/*
    Determine the location of elements of array A (30) that do not occur in array B (15)
*/

#include"Determine.h"
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

    calculation(A, B, size_A, size_B);
    return 0;
}
