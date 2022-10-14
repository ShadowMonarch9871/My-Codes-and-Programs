#include <stdio.h>
void main()
{
    int a[100], b[100], c[100], n1, n2, n, k = 0, i, j;

    printf("Enter number of element of set1\n");
    scanf("%d", &n1);
    printf("Enter number of element of set2\n");
    scanf("%d", &n2);

    printf("Enter elements of set A\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of set B\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }

    printf("intersection is\n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
}
