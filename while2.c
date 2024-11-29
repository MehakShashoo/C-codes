//wap to take a number from the user and remove all the even digits.
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
            printf("%d", rem);
        }
        n = n / 10;
    }
   
    return 0;
}