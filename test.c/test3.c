#include<stdio.h>
int main(){
int a,b,c;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
//logic:
c=a;
a=b;
b=c;
printf("a=%d",a);
printf(" b=%d",b);


    return 0;
}