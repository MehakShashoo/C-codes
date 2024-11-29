// wap to find area of circle,rectangle,square by user choice
#include <stdio.h>
int main()
{
    float pi, radius, length, breadth, side;
    pi = 3.14;
    int a;
    printf("1.Area of circle\n");
    printf("2.Area of rectangle\n");
    printf("3.Area of square\n");
    printf("1,2,3=");
    scanf("%d", &a);
    switch (a)              
    {
    case 1:
        printf("Enter radius=");
        scanf("%f", &radius);
        printf("area of circle=%f\n", pi * radius * radius);
        break;
    case 2:
        printf("Enter length=");
        scanf("%f", &length);
        printf("Enter breadth=");
        scanf("%f", &breadth);
        printf("area of rectangle=%f", length * breadth);
        break;
    case 3:
        printf("Enter side=");
        scanf("%f", &side);
        printf("area of square=%f\n", side * side);
        break;
    }
    return 0;
}