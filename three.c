// wap to find the greatest among 3
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
        printf("a is greatest");
    }
    else if (b > a && b > c)
    {
        printf("b is greatest");
    }
    else
    {
        printf("c is greatest");
    }
    return 0;
}