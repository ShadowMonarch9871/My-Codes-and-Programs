#include <stdio.h>
int main()
{
    int C[10][10], A[10][10], B[10][10], i, j, l, row, col;
    printf("Enter the number of rows  ");
    scanf("%d", &row);
    printf("Enter the number of columns  ");
    scanf("%d", &col);
    printf("\nEnter element you want to insert in the matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n Enter element you want to insert in the matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {

            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("\n A*B=\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            C[i][j] = 0;
            for (l = 0; l < col; l++)
            {
                C[i][j] = C[i][j] + A[i][l] * B[l][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("Program made by Ayush Pokhriyal");
}