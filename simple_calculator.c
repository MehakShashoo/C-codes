#include<stdio.h>
int main(){
int a,b;
char operator;
printf("ENter operator=");
scanf("%c",&operator);
printf("Enter a=");
scanf("%d",&a);
printf("Enter b=");
scanf("%d",&b);
switch(operator){
    case'+':
    printf("%d",a+b);
    break;
    case'-':
    printf("%d",a-b);
    break;
    case'*':
    printf("%d",a*b);
    break;
    case'/':
    printf("%d",a/b);
    break;
    
}

    return 0;
}