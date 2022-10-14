#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the number and power to be raised respectively\n");
    scanf("%d %d",&a,&b);
    int c;
    c=1;
    while(b!=0){
        c=c*a;
        b--;
    }
    printf("%d",c);
}