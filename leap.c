// wap to check if the year is leap or not
#include <stdio.h>
int main()
{
    int a;
    printf("enter year=");
    scanf("%d", &a);
    if (a % 100 == 0)          //for centuary
    {
        if (a % 400 == 0)
            printf("LEAP YEAR");
        else
            printf("NOT LEAP YEAR");
    }
    else
    {
        if (a % 4 == 0)                   //for normal year
            printf("LEAP YEAR");
        else
            printf("NOT A LEAP YEAR");
    }
    return 0;
}