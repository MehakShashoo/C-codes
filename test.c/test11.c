#include<stdio.h>
int main(){
    int a,b,c;
printf("enter a=");
scanf("%d",&a);
printf("enter b=");
scanf("%d",&b);
printf("enter c=");
scanf("%d",&c);
(a>b&&a>c)?printf("%d",a):(b>c&&b>c)?printf("%d",b):printf("%d",c);
    return 0;
}