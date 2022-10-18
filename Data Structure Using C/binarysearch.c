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
    printf("Enter Number of Elements\n");
    scanf("%d", &n);
    int ar[n];
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    sort(ar, n);
    int mid;
    int a;
    printf("Enter Element to be searched\n");
    scanf("%d", &a);
    int low, high;
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (ar[mid] < a)
        {
            low = mid + 1;
        }
        else if (ar[mid] > a)
        {
            high = mid - 1;
        }
        else
        {
            printf("Element Found at %d", mid+1);
            break;
        }
        mid = (low + high) / 2;
    }
}