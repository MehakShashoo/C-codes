#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a=");
    scanf("%d",&a);
    printf("Enter b=");
    scanf("%d",&b);
    switch (a > b)
    {
    case 0:
        printf("%d", &a);
        break;
    case 1:
        printf("%d", &b);
        break;
    }
}