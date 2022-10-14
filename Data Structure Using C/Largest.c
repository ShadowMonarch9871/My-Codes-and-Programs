#include <stdio.h>
void Largest(int n)
{
    int array[n];
    printf("\nEnter the Elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int temp1, temp2;
    temp2 = n;
    while (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (array[i] < array[i + 1])
            {
                continue;
            }
            else
            {
                temp1 = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp1;
            }
        }
        n = n - 1;
    }
    n = temp2;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nLargest Element is - %d ", array[n - 1]);
}
int main()
{
    int n;
    printf("Enter Number of Elements ");
    scanf("%d", &n);
    Largest(n);
    printf("\nProgram made by Ayush Pokhriyal");
}
