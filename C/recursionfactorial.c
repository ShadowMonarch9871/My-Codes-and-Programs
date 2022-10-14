#include<stdio.h>
long int fact(int n);
long int fact(int n){
    if(n>=1){
        return n*fact(n-1);
    }
    else{
        return 1;
    }

    }
    void main(){
    int n;
    scanf("%d",&n);
    printf("\n%ld",fact(n));
}