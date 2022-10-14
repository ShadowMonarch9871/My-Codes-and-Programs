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
    printf("Enter the Number of Element\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);

    int temp = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                temp = arr[i];
            }
            else
            {
                continue;
            }
        }
    }
    printf("%d repeats %d times in the array", temp, count);
}