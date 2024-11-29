// wap to copy data from one array to another
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
    printf("array elements=");
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", arr[i]);
    }
    int arr1[size];
    printf("copied array=");
    for (int i = 0; i < size; i++)
    {
        arr1[size] = arr[size];
        printf("%d \n", arr[i]);
    }
}