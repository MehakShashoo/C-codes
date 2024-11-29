/* wap to check if the character is alphabet,digit or symbol
#include <stdio.h>
int main()
{
    char ch;
    printf("enter character=");
    scanf("%c", &ch);
    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("character is alphabet");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("character id digit");
    }
    else
    {
        printf("character is symbol");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int customerid=10091;
    int n=150;
    float bill;
    scanf("%d\n", &customerid);
    scanf("%d\n", &n);
    if (n <= 199)
    {                                               
        bill = n*1.20;
    }
    else if (n >= 200 && n< 400)
    {
        bill =n*1.50;
    }
    else if (n >= 400 &&n < 600)
    {
        bill =n*1.80;
    }
    else
    {
        bill=n* 2.00;
    }
    if (n > 400)
    {
        bill=bill+ (bill*0.15);
    }
    if (bill>100)
    {
        bill=100;
    }
    printf("%d %0.2f",customerid,bill);
    return 0;
}

