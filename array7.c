//wap to linear search
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
    int target, flag = 0;
    printf("Enter searching elelment=");
    scanf("%d", &target);
    // logic for linear size
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
        if (flag == 1)
        {
            printf("element found at %d", i);
        }
        else
        {
            printf("element not found");
        }
    }

    return 0;
}