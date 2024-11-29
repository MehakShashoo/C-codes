// wap to add the first and last digit of a given number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("ENTER NUMBER=");
    scanf("%d", &num);
    int digits = (int)log10(num) + 1;
    int firstdigit = num / pow(10, digits - 1);
    int lastdigit = num % 10;
    int sum = firstdigit + lastdigit;
    printf("Sum of 1st and last digit=%d", sum);
    return 0;
}
