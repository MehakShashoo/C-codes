//wap to print the sum of n numbers 
#include<stdio.h>
int main (){
    int n, sum=0;
    printf("enter n=");
    scanf("%d",&n);
        for (int i=1; i<=n; i=i+1){
            sum=sum+i;
    }
    printf("sum of series=%d", sum);
return 0;

}