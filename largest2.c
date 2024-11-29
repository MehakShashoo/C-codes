//wap to find the largest number among three using ternery operator
#include <stdio.h>
int main (){
    int a,b,c,x;
    printf("enter a=");
    scanf("%d", &a);
    printf("enter b=");
    scanf("%d", &b);
    printf("enter c=");
    scanf("%d", &c);
    (a>b && a>c)? printf("a is largest"):(b>c)? printf("b is largest"):printf("c is largest");
    return 0;
}