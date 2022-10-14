#include<stdio.h>
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
void main(){
    int n;
    printf("Enter Number of Elements\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    sort(ar,n);
    int mid;
    mid=(n+1)/2;
    int a;
    printf("Enter Element to be searched\n");
    scanf("%d",&a);
    int searchkey=ar[mid];
    int low,high;
    if(searchkey==a){
        printf("Found at %d ",mid);
    }
    else{
        if(searchkey<a){
            low=ar[mid+1];
            high=ar[n];
            
            
           
        }
    }


}