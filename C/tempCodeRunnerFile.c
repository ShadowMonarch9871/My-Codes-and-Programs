/*Series*/
#include<stdio.h>
#include<math.h>
int fact(long int n){
    long int j,b;
    b=1;
    for(j=1;j<=n;j++){
        b=b*j;
    }
    return b;
}
void main(){
    long int x,n;
    printf("Enter the values of x and n\n");
    scanf("%ld %ld",&x,&n);
    long int i,sum;
    sum=0;
    for (i=1;i<=n;i++){
        sum=sum+(pow(x,n)/fact(n));

    }
}