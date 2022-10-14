#include <stdio.h>
void sort(int arr[], int n) // Sort Function
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
int main()
{
    int n, m;
    printf("Enter the Number of Elements in the bigger set\n");
    scanf("%d", &n); // Size of Two Arrays
    printf("Enter the Number of Elements in the smaller set(if)\n");
    scanf("%d", &m);
    int arr1[n], arr2[m];
    printf("Enter Elements of first set\n");
    for (int i = 0; i < n; i++) // Initailizing both Arrays
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter Elements of second set\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    sort(arr1, n);
    sort(arr2, m);
    int c = (n + m); // Size of the third array
    int arr3[c];
    for (int i = 0; i < n; i++) // Initializing third array upto n elements and filling elements of first array
    {
        arr3[i] = arr1[i];
    }

    for (int i = n; i < c; i++) // Initializing third array upto m elements and filling elements of second array
    {
        arr3[i] = arr2[i - 5];
    }
    sort(arr3, c);

    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}