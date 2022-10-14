#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the number of rows and column respectively\n");
    scanf("%d %d", &a, &b);
    int ar[a][b];
    printf("Enter the Elements\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int arr1[b][a];
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            arr1[i][j] = ar[j][i];
        }
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\nProgram made by Ayush Pokhriyal");
}
