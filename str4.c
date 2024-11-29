#include<stdio.h>
#include<string.h>
int main (){
char s1[30], s2[30];
printf("Enter string1=");
gets(s1);
printf("Enter string2=");
gets(s2);
int x=strcmp(s1,s2);
if(x==0){
    printf("s1 and s2 are equal");
}
else if(s1==1){
    printf("s1 is greater than s2");
}
else{
    printf("s1 is less than s2");
}
    return 0;
}