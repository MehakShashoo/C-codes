// wap to count number of even and odd numbers from array
#include <stdio.h>
int main()
{
    int size;
    printf("enter size of array=");
    scanf("%d", &size);
    int arr[size];
    printf("enter array elements=");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d", arr[i]);
            even++;
        }

        else

            odd++;
    }

    printf("total even number=%d\n", even);
    printf("total odd number=%d\n", odd);

    return 0;
}