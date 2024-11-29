// wap to take input of 5 subject marks
#include <stdio.h>
int main()
{
    int a, b, c, d, e, average;
    printf("enter marks of maths=");
    scanf("%d", &a);
    printf("enter marks of hindi=");
    scanf("%d", &b);
    printf("enter marks of science=");
    scanf("%d", &c);
    printf("enter marks of history=");
    scanf("%d", &d);
    printf("enter marks of english=");
    scanf("%d", &e);
    average = (a + b + c + d + e) / 5;
    printf("average=%d\n", average);
    if (average >= 90)
    {
        printf("A+");
    }
    else if (average >= 80 && average < 90)
    {
        printf("A");
    }
    else if (average >= 70 && average < 80)
    {
        printf("B+");
    }
    else if (average >= 60 && average < 70)
    {
        printf("B");
    }
    else if (average >= 50 && average < 60)
    {
        printf("C");
    }
    else
    {
        printf("FAIL");
    }
    return 0;
}