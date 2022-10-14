#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter number of rows and coulmns of matrix1\n");
    scanf("%d %d",&a,&b);
    int m1[a][b];
    int i,j;
    printf("Enter elements of matrix1\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&m1[i][j]);

        }
    }
    printf("Enter number of rows and columns of matrix1\n");
    scanf("%d %d",&c,&c=d);
    int m2[c][d];
    printf("Enter elements of matrix2\n");
    for(i=0;i<c;i++){
        for(j=0;j<d;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    if(b=c){
        int m3[d][a];
        for(i=0;i<d;i++){
            for(j=0;j<a;j++){
                m3[i][j]=0;
                for(int k=0;k<b;k++){
                    m3[i][j]=m3[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<d;i++){
            for(j=0;j<a;j++){
                printf("%d",m3[i][j]);
            }
        }
    }




}