#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Natural Numbers\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum1=0,sum2=0;
    sum1=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum2=sum2+arr[i];
    }
    printf("%d is the missing Number",sum1-sum2);
    return 0;
}