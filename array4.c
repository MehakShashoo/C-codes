// wap to find the sum of all elemets of thr array
#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("enter size of array=");
    scanf("%d", &size);
    int arr[size];
    printf("enter array elements=");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < size; i++)
        sum = sum + arr[i];
    {
        printf("sum of array elements=%d", sum);
        
    }
    return 0;
}