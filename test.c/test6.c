#include<stdio.h>
int main(){
    int fah,cel;
    printf("enter temperature in fahrenheit=");
    scanf("%d",&fah);
    cel=(fah-32)*5/9;
    printf("Temperature in celsius=%d",cel);
    return 0;
}
// formula== (f-32)*5/9