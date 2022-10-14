#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int temp,rem,sum,count;
    temp=n;
    rem=0;
    count=0;
    sum=0;
    while(n>0){
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    n=temp;
    if(n==sum){
        printf("PALINDOME\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    sum=0;
    rem=0;

    while(n>0){
        count++;
        n=n/10;
    }
    n=temp;
    while(n>0){
        rem=n%10;
        sum=sum+pow(rem,count);
        n=n/10;
    }
    if(sum==temp){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    
    





}