#include <stdio.h>
#include <math.h>
int jumpsearch(int arr[], int n, int key)
{
    int start = 0;
    int size = sqrt(n);
    int end = size;
    while ((arr[end] <= key) && (end < n))
    {
        start = end;
        end = end + size;
        if (end > n - 1)
        {
            end = n ;
        }
    }
    for (int i = start; i < end; i++)
    {
        if (arr[i] == key)
        {
            printf("Found at %d", i);
            break;
        }
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter the size of Array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to be searched\n");
    int key;
    scanf("%d", &key);
    jumpsearch(arr, n, key);
}