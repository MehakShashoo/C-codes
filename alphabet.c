//wap to check if character is alphabet or not
#include<stdio.h>
int main (){
char ch;
printf("enter character=");
scanf("%c", &ch);
if((ch>=65 && ch<=90) || (ch>=97 && ch<=122)){
    printf("character is alphabet");
}
else{
    printf("character is not alphabet");
}
    return 0;
}