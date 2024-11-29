// wap to print fibonacci series
/*#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c;
    printf("enter number of values (n)=");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, arm=0,r,c;
    printf("Enter a number=");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        r=n%10;
        arm=(r*r*r)+arm;
        n=n/10;
    }
    if(c==arm)
    printf("Armstrong nummber");
    else
    printf("Not an Armstrong number");
    

    return 0;
}
