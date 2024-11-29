// wap to perform the sum of each row and column of 2D array
#include <stdio.h>
int main()
{
    int row, col;
    printf("enter row and column size=");
    scanf("%d", &row, &col);
    int arr[row][col];
    printf("enter array elements=");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d ", arr[i][j]);
        }
    }
    // logic to perform sum of each row
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Sum of %d row is %d\n", i, sum);
    }

    // logic to perform sum of column 
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];
        }
        printf("Sum of %d column is %d\n", i, sum);
    }
    return 0;
}