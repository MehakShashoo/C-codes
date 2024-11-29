// nested loop of for
/*#include <stdio.h>
int main()
{
  int n, i;

  for (i = 1; i <= 5; i++)
  {
    for (n = 1; n <= 5; n++)
    {                                         // i indicates row anf j indicates column
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}*/

/*#include <stdio.h>
int main()
{
  int j, i;

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (i == 1 || i == 5 || j == 1 || j == 5)       // i indicates row anf j indicates column
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
      
    }
    printf("\n");

    
  }
}

/*#include <stdio.h>
int main()
{
  int j, i;

  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if (i == 1 || i == 5 || j == 1 || j == 5 || i==j)       // i indicates row anf j indicates column
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
      
    }
    printf("\n");

    
  }
}*/
/*#include <stdio.h>
int main()
{
  int j, i,n;
  printf("n=");
  scanf("%d", &n);

  for (i = 1; i <=n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
      
    }
    printf("\n");

    
  }
}*/

#include <stdio.h>
int main()
{
  int j, i;
  for (i = 1; i <= 5; i++)
  {
    for (j = 1; j <= 5; j++)
    {
      if ( i == 1 ||j==1|| i==j)       
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
      
    }
    printf("\n");

    
  }
}