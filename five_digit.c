// wap to read a 5 digit number from the user and perform sum of their digits.
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter 5 digit number=");
    scanf("%d", &n);
    sum += n % 10; // short hand assignment opreator.
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    sum = sum + n % 10;
    n = n / 10;
    printf("sum of digits=%d", sum);
    return 0;
}