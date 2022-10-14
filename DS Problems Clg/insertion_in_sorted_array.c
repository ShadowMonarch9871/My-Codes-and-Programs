#include <stdio.h>
void sort(int arr[], int n)
{
    int temp = 0;
    int b = n;
    while (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            else
            {
                continue;
            }
        }
        n = n - 1;
    }
}
void main()
{
    int n;
    printf("Enter the size of array:- ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the Elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
    printf("Enter the number to be inserted:-");
    int a;
    scanf("%d", &a);
    int index;
    for (int i = 0; i < n; i++)
    {
        if ((a > arr[i]) && (a < arr[i + 1]))
        {
            index = i + 1;
            break;
        }
        else
        {
            continue;
        }
    }
    n++;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = a;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);//Sorted Array
    }
}