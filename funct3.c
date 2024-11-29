// function with no argument and return value
#include <stdio.h>
void getMessage(void);
int computeSimpleInterest(int, int, int);
int main()
{
    int p, r, t;
    printf("Enter p, r, t=");
    scanf("%d%d%d", &p, &r, &t);
    int si = computeSimpleInterest(p, r, t);                //actual arguments
    printf("SImple Interest=%d", si);
    return 0;
}
int computeSimpleInterest(int p, int r, int t){                 //formal arguments(int p, int r, int t)
return (p * r * t) / 100;
}