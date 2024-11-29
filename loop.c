// wap to print number from 1 to N. Taking N from user
#include <stdio.h>
int main()
{
    int N;
    printf("enter value of N=");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}