//wap to conver a time given in milliseconds into hours,minutes and seconds
#include<stdio.h>
int main (){
float milliseconds;
printf("enter the time in milliseconds ");
scanf("%f", &milliseconds);
printf("  hours=%f", 3600000/milliseconds);
printf("  minutes=%f", 60000/milliseconds);
printf("  seconds=%f", 1000/milliseconds);
 return 0;
}