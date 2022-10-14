#include <stdio.h>
void main()
{
    int n;
    printf("Enter the Number of Students ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the Marks ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int sum;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    float avg;
    avg = sum / n;
    printf("\nThe average is %f", avg);
    printf("\nProgram made by Ayush Pokhriyal");
}