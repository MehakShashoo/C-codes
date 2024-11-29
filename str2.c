// wap to read and display the name of the student
#include <stdio.h>
int main()
{
    char name[30], clgname[30];
    printf("Enter your name=");
    // scanf("%s",&name);
    gets(name);
    printf("Name is=%s\n", name);
    printf("Enter your clgname=");
    gets(clgname);
    printf("Clg Name is=%s\n", clgname);
    puts(name);
    puts(clgname);
}