// wap to check if the person id eligible for vote or not
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the age of the person=");
    scanf("%d", &a);
    if (a >= 18)
    {
        printf("Person is eligible for voting");
    }
    else
    {
        printf("Person is not eligible for voting");
    }
    return 0;
}