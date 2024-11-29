//wap to use the pre-defined functions
#include<stdio.h>
#include<string.h>
int main (){
/*char str[20];
printf("Enter string=");
gets(str);
int len= strlen(str);
printf("Length of string is %d", len);
strlwr(str);
printf("after converting in lower case=%s\n",str);

strupr(str);
printf("after converting in upper case=%s\n",str);

strcpy(str);
printf("after copying=%s",str);

char s1[30], s2[30];
printf("Enter string1=");
gets(s1);
strcpy(s2,s1);
printf("%s",s2);

char s1[30], s2[30];
printf("Enter string1=");
gets(s1);
printf("Enter string2=");
gets(s2);
strcat(s1," ");
strcat(s1,s2);
printf("after concatination=%s",s1);*/

char s1[30], s2[30];
printf("Enter string1=");
gets(s1);
printf("Enter string2=");
gets(s2);
int x=strcmp(s1,s2);
printf("result=%d",x);

return 0;
}