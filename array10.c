// wap to perform the sum of all elements of 2D array
#include <stdio.h>
int main()
{
    int arr[2][2], sum = 0;
    printf("Enter Array elements =");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            scanf("%d", &arr[2][2]);
            sum = sum + arr[2][2];
        }
    }

    printf("Sum of array=%d", sum);
    return 0;
}
