//wap to check if the given alphabet is vowel or consonant
#include<stdio.h>
int main(){
char ch;
printf("enter alphabet=");
scanf("%c", &ch);
if(ch=='a' || ch=='e' ||ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E' || ch=='I'|| ch=='O' || ch=='U')
{
    printf("alphabet is vowel");
}
else{
    printf("alphabet is consonant");
}
    return 0;
}