#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of elements ");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the Numbers ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Enter the Number to search:- ");
    int b, index;
    scanf("%d", &b);
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == b)
        {
            index = i;
        }
        else
        {
            continue;
        }
    }
    printf("Element Found at %d position", index + 1);
    printf("\nProgram made by Ayush Pokhriyal");
}