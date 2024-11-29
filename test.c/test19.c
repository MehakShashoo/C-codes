#include <stdio.h>
int main()
{
    int a, b, c, d, e, total_marks, average;
    printf("Enter marks of maths=");
    scanf("%d", &a);
    printf("Enter marks of english=");
    scanf("%d", &b);
    printf("Enter marks of science=");
    scanf("%d", &c);
    printf("Enter marks of history=");
    scanf("%d", &d);
    printf("Enter marks of hindi=");
    scanf("%d", &e);
    total_marks = a + b + c + d + e;
    printf("Total marks=%d\n", total_marks);
    average = total_marks / 5;
    printf("Percentage=%d", average);
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
        printf("B");
    }
    else if (average >= 60 && average < 70)
    {
        printf("B+");
    }
    else if (average >= 50 && average < 60)
    {
        printf("C");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}