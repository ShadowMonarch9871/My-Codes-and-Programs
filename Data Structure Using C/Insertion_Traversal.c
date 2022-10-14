#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number of Elements\n");
    scanf("%d", &n);
    int array[n];
    printf("Enter the Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}