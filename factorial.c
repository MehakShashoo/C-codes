// wap to printf factorial of a number.
#include <stdio.h>
int main()
{
  int n, a = 1;
  printf("enter value n=");
  scanf("%d", &n);
  for (int i = 1; i <= n; i = i + 1)
  {
    a = a * i;
  }
  printf("factorial=%d", a);
  return 0;
}