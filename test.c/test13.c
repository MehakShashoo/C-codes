//milliseconds into hours,minutes and seconds
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("milliseconds=");
    scanf("%d",&a);
    b=3600000/a;
    c=60000/a;
    d=1000/a;
    printf("hours=%d",b);
    printf("minutes=%d",c);
    printf("seconds=%d",d);
    return 0;
}