#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a=");
    scanf("%d", &a);
    printf("enter b=");
    scanf("%d", &b);
    printf("additon=%d\n", a + b);
    printf("subtraction=%d\n", a - b);
    printf("multiplication=%d\n", a * b);
    printf("modulus=%d\n", a % b);
    return 0;
}