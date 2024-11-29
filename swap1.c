// wap to swap first and last digit of a given number
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("ENTER NUMBER=");
    scanf("%d", &num);
    int digits = (int)log10(num) + 1;
    int firstdigit = num / pow(10, digits - 1);
    int p = (int)pow(10, digits - 1)+1;
    num = num % p;
    int lastdigit = num % 10;
    num = num / 10;
    num = lastdigit * p + num * 10 + firstdigit;
    printf("After swapping the number is %d", num);

    return 0;
}
