#include <stdio.h>
void main()
{
    printf("Enter the no of elements "); // Input the Size
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter the Elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array is :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}