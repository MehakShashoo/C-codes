#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    printf("Enter String=");
    gets(str); 
    int alpha=0, digit =0 , symbol=0;
    int len=strlen(str);
    for (int i=0; i<len; i++)
    {
        if((str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<))
        alpha++;
        else if(str[i]>=48 && str[i]<=57)
        digit++;
        else 
        symbol++;
    }
    printf("Total alphabets=");
    printf("Total ")
}