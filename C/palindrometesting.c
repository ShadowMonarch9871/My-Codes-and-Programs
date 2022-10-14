#include <stdio.h>
#include<math.h>
void main()
{
    int i, rem, sum, temp;
    rem = 0;
    sum = 0;
    for (i = 100; i < 1000; i++)
    {
        temp = i;
        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }
        if (sum == i)
        {
            printf(" %d", i);
        }
        rem=0;
        sum=0;
    }
    rem=0;
    sum=0;
    for(i=1000;i,10000;i++){
        temp=i;
        while(temp>0){
            rem=temp%10;
            sum=sum+pow(rem,4);
            temp=temp/10;
        }if(sum==i){
            printf(" %d",i);
        }
        sum=0;
        rem=0;
    }
}