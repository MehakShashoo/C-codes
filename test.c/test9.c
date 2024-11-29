/*#include<stdio.h>
int main(){
    int a;
printf("enter a number=");
scanf("%d",&a);
(a%2==0)? printf("even"):printf("odd");
    return 0;
}*/

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a=");
    scanf("%d", &a);
    printf("enter b=");
    scanf("%d", &b);
    printf("enter c=");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d", a);
    }
    else if (b > c && b > a)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}