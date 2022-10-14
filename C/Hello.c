#include<stdio.h>
void main()
{
    int i,j,a,b,c;
    a=0;
    b=1;
    printf("%d %d",a,b);
    c=0;
    while(c<100)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<100)
        {printf(" %d",c);
    }}
}