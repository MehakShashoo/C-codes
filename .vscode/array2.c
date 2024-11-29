/*#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter array elements=");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
     printf(" array elements=");                            //global size of array cannot be variable
     for(int i=0; i<5; i++){
        printf("%d ", arr[i]);
     }
     return 0;
}*/

#include <stdio.h>
int main()
{
    int size;
    printf("enter size of array=");
    scanf("%d",&size);
    int arr[size];
    printf("enter array elements=");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array elements=");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}