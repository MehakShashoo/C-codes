// wap to find perimeter and area of circle , square and rectangle
#include <stdio.h>
int main()
{
    // circle
    int length,breadth,side;
    float radius;
    float pi = 3.14;
    printf("enter radius=");
    scanf("%f", &radius);
    printf("perimeter of circle=%f\n", 2 * pi * radius);
    printf("area of circle=%f\n", pi * radius * radius);
    // square
    printf("enter side of square=");
    scanf("%d", &side);
    printf("perimeter of square=%d\n", 4 * side);     
    printf("area of square=%d\n", side * side);
    // rectangle
    printf("enter length=");
    scanf("%d", &length);
    printf("enter breadth=");
    scanf("%d", &breadth);
    printf("perimeter of rectangle=%d\n", 2 * (length + breadth));
    printf("area of rectangle=%d\n", length * breadth);
    return 0;
}