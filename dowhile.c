// wap to perform the sum of all input number untill the user enter 0
#include <stdio.h>
int main()
{
    int n, sum = 0; // do while loop will run atleast one time
    do
    {
        printf("Enter number=");
        scanf("%d", &n);
        sum = sum + n;
    } while (n != 0);
    printf("sum=%d", sum);
}