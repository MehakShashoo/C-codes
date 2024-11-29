#include <stdio.h>
#include <string.h>
int main()
{
    char str[30], ch;
    prnintf("Enter string");
    gets(str);
    printf("enter character=");
    scanf("%c", &ch);
    int len = strlen(str), flag = 0, i;
    for (i = 0; i < len; i++)
    {
        if (str[i] == ch)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("first occurance of character %c is %d", ch, i);
    else
        printf("Given charcter not found!!");
    return 0;
}