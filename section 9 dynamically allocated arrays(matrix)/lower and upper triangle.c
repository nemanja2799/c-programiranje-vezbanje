#include <stdio.h>
#include<stdlib.h>


int **CreateLowerTriangularMatrix(int RowNumber)
{
    int **matrix = NULL;
    matrix = (int**)malloc(RowNumber*sizeof(int*));
    int i = 0;
    for(i=0;i<RowNumber;i++)
    {
        matrix[i] = (int*)malloc((i+1)*sizeof(int));
    } 
    for(int i=0;i<RowNumber;i++)
    {
        for(int j=0;j<=i;j++)
        {
            matrix[i][j]= 1;
            
        }
        
    }
    return matrix;
}
int **CreateUpperTriangulareMatrix(int RowNumber) {
    int **matrix = NULL;
    matrix = (int**)malloc(RowNumber * sizeof(int*));
    for (int i = 0; i < RowNumber; i++) {
        matrix[i] = (int*)malloc((RowNumber - i) * sizeof(int));
    }
    for (int i = 0; i < RowNumber; i++) {
        for (int j = 0; j < (RowNumber - i); j++) {
            matrix[i][j] = 1; // Popunjavanje matrice vrednošću 1
        }
    }

    // Debug ispis da proverite inicijalizaciju
    printf("\nDebug: Upper Matrix Initialization:\n");
    for (int i = 0; i < RowNumber; i++) {
        for (int j = 0; j < (RowNumber - i); j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return matrix;
}
void PrintUppererTriangleMatrix(int**Matrix, int RowNumber)
{
    for(int i=0;i<RowNumber;i++)
    {
        for(int j=0;j<RowNumber;j++)
        {
            if(j<i)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t", Matrix[i][j-i]);
            }
        }
        printf("\n");
    }
}

void PrintLowerTriangleMatrix(int**Matrix, int RowNumber)
{
   
    for(int i=0;i<RowNumber;i++)
    {
        for(int j=0;j<RowNumber;j++)
        {
            if(j>i)
            {
                printf("0\t");
            }
            else
            {
                printf("%d\t", Matrix[i][j]);
            }
        }
        printf("\n");
    }

}





int main() {
    int n = 3;
    //int ** LowerMatrix = CreateLowerTriangularMatrix(n);
    int **UpperMatrix = CreateUpperTriangulareMatrix(n);
    //PrintLowerTriangleMatrix(LowerMatrix,n);
    PrintUppererTriangleMatrix(UpperMatrix,n);
    
}
