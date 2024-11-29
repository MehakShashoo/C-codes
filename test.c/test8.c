#include<stdio.h>
int main(){
int n,sum=0;
printf("enter a 5 digit value=");
scanf("%d",&n);
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
sum=sum+n%10;
n=n/10;
printf("Sum of the 5 digits=%d",sum);
    return 0;
}