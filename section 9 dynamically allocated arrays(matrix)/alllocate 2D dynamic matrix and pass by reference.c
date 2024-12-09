#include <stdio.h>
#include <stdlib.h>

void allocate2DMatrixByRef(int*** matrix, int n)
{
    int i=0, j=0;
    *matrix = (int**)malloc(n*sizeof(int*));
    for(i =0;i<n;i++)
    {
        (*matrix)[i] = (int*)malloc(n*sizeof(int));
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            (*matrix)[i][j]=j;
        }
    }
}

void PrintMatrix(int** matrix, int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int**mat = NULL;
    int n =5;
    allocate2DMatrixByRef(&mat, n);
    PrintMatrix(mat,n);

    return 0;
}
