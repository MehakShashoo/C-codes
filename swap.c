//wap for swapping of two numbers without the use of third variable.
#include<stdio.h>
int main (){
int x,y;
printf("enter x ");
scanf("%d",&x);
printf("enter y ");
scanf("%d", &y);
//operations to be written here
x=x+y;
y=x-y;
x=x-y;
printf("x= %d",x);
printf(" y= %d",y);
    return 0;
}