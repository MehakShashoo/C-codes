#include <stdio.h>
int main()
{
    int n;
    printf("enter value of n=");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        printf("%d\n", i * i);
    }
    return 0;
}