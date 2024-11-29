// wap to toggle the each character
#include <stdio.h>
#include <string.h>
int main()
{
int i=0;
    char str[20];
    printf("Enter string=");
    gets(str);
    int length = strlen(str);
    for (i = 0; i < length;i++);
    {
    if (str[i] >= 65 && str[i] <= 90)
        str[i] = str[i] + 32;
    else if (str[i] >= 97 && str[i] <= 122);
    str[i] = str[i] - 32;
    }
    printf("after toggle=%s",str);
    return 0;
}