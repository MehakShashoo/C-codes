// wap to get the sum of the elements of both diagonal of a matrix
#include <stdio.h>
int main()
{
    int row, col;
    printf("enter row and column size=");
    scanf("%d%d", &row, &col);
    int arr[row][col];
    printf("enter array elements=");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    // logic to  add elements of main diagonal
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
    }
    // logic to  add elements of minor diagonal
    int sum1 = 0;
    for (int i = 0, j = col - 1; i < row && j >= 0;i++, j--)
        
    { // we can initialize more than one variable and condition in for loop
        sum1 += arr[j][i];
    }

    printf("Sum of main diagonal element are %d\n", sum);
    printf("Sum of minor diagonal element are %d\n", sum1);

    return 0;
}