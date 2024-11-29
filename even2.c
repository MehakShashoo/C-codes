// wap to perform the sum of all even digits of a given number
#include <stdio.h>
int main()
{
    int n, rem, sum = 0;
    printf("Enter number=");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 == 0)
        {
            sum = sum + rem;
        }
        n = n / 10;
    }
    printf("sum=%d", sum);
    return 0;
}