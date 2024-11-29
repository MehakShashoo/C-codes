// wap to take a number from the user and print only odd digits of the number.
/*#include <stdio.h>
int main()
{
    int n, rem, sum = 0, num = 0;
    printf("Enter number=");
    scanf("%d", &n);
    int i = 1;
    while (n != 0)
    {
        rem = n % 10;
        if (rem % 2 != 0)
        {
            num = num + rem * 1;
            i = i * 10;
        }
        n = n / 10;
    }
    printf("%d", num);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int n,i=0, sum = 0;
    printf("Enter number=");
    scanf("%d", &n);
    while(n<i){
        sum=sum+i;
        printf("sum of digits=%d",sum);
    }
}