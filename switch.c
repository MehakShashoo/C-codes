// wap to take day number as a input and print the day name corresponding to that day
#include <stdio.h>
int main()
{
    int a;
    printf("Enter day number=");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("MONDAY");
        break;
    case 2:
        printf("TUESDAY");
        break;
    case 3:
        printf("WEDNESDAY");
        break;
    case 4:
        printf("THRUSDAY");
        break;
    case 5:
        printf("FRIDAY");
        break;
    case 6:
        printf("SATURDAY");
        break;
    case 7:
        printf("SUNDAY");
        break;
        return 0;
        default: printf("NOT A VALID NUMBER");
        break;
    }
}    