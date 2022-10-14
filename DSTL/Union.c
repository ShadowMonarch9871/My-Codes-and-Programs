#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter the no of elements in set 1\n");
    scanf("%d", &a);
    printf("Enter the no of elements in set 2\n");
    scanf("%d", &b);
    int Array1[a];
    int Array2[b];
    int i, c, k = 0;
    int j=0;
    printf("Enter Elements of Set 1\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &c);
        Array1[i] = c;
    }
    printf("Enter Elements of Set 2\n");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &Array2[i]);
    }

    int arr3[100];
    for (int i = 0; i < a; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (arr3[j] == Array1[i])
                break;
        }
        if (j == k)
        {
            arr3[k] = Array1[i];
            k++;
        }
    }
    for (i = 0; i < b; i++)
    {
       
        for (int j = 0; j < k; j++)
        {
            if (arr3[j] == Array2[i])
                break;
        }
        if (j == k) 
        {
            arr3[k] = Array2[i];
            k++;
        }
    }
    printf("Union of set A and B is:-\n");
    for(i=0;i<k;i++)
      printf("%d ",arr3[i]);
}
