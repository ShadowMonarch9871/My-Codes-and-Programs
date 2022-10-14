#include <stdio.h>
void main()
{
    int array1[100];
    printf("Enter the no of elements\n"); // Input the Size
    int n;
    scanf("%d", &n);

    printf("Enter the Elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Array is :-\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array1[i]);
    }
    int b, pos;
    printf("\nEnter the element to be inserted:- ");
    scanf("%d", &b);
    printf("Enter the position at which element has to be appended:- ");
    scanf("%d", &pos);
    n++;
    for (int i = n - 1; i >= pos; i--)
    {
        array1[i] = array1[i - 1];
    }
    array1[pos-1] = b;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array1[i]);
    }
}