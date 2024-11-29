//swappimg of two variables using third variable
#include<stdio.h>
int main (){
int x,y,z;
printf("enter x=");
scanf("%d",&x);
printf("enter y=");
scanf("%d",&y);
//operations to be written now
z=x;
x=y;
y=z;
printf("x=%d",x);
printf(" y=%d",y);
    return 0;
}