#include <stdio.h>
int main()
{
    int n, arr[100];
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("Enter the elements:- ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be removed ");
    int b, index;
    scanf("%d", &b);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == b)
        {
            index = i;
            break;
        }
        else
        {
            continue;
        }
    }
    n--;
    
    
    for (int i = index; i <= n; i++)
    {
        arr[i] = arr[i + 1];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}