 //wap to find maximum among n numbers.
#include <stdio.h>
int main()
{
    int n, num, max = 0;
    printf("enter number of values (n)=");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter numbers=");
        scanf("%d", &num);
        if (num > max)
            max = num;
    }
    printf("Maximum number=%d", max);

    return 0;
}

/*#include <stdio.h>
int main()
{
    char ch;
    do
    {
        int n, num, max = 0;
        printf("enternumber of values n=");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            
            scanf("%d", &num);
            if (num > max)
                max = num;
        }
    }while ();
    printf("Maximum number=%d", max);
    printf("do you want to run this program again(y/n)=");
    scanf("\n%c, &ch");

    return 0;
}*/
