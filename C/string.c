#include<stdio.h>
#include<string.h>
void main(){
    char str[20];
    printf("Enter the String\n");
    gets(str);
    puts(str);
    if(str==strrev(str)){
        printf("PALINDOME");
    }
    else{
        printf("NOT PALINDOME");
    }

}