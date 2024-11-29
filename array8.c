// horizantally excess of an array
#include <stdio.h>
int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; // 4*12: size of 2d array
    // or int arr[4] [3]={1,2,3,4,5,6,7,8,9,10,11,12,}                  i:row and  j:column
    printf("Array elements are=\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); // to represent in the form of matrix
    }
}