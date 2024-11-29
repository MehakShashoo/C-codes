//wap to check if number is even or odd using ternery operator
#include <stdio.h>
void main (){
    int a;
    printf("Enter a number=");
    scanf("%d", &a);
    (a%2==0)? printf("Number is even"): printf("Number is odd");
}