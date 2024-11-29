/*#include<stdio.h>
int main (){
int x;
printf("enter value of x=");
int z= scanf("%d", &x);
printf("%d", z);
    return 0;
}*/

/*#include <stdio.h>
#include<stdlib.h>
int main()
{
    int pin;
abc:
    printf("enter PIN=");
    fflush(stdin);
    int z = scanf("%d", &pin);
    if (z == 0)
        goto abc;
    printf("%d", z);
    return 0;
}*/

#include <stdio.h>
int main()
{
    int pin;

    printf("enter PIN=");
    
    scanf("%d", &pin);
   if(pin<999)
   {
    printf("valid\n");
    goto xyz;                               //if and else cannot work at the sametime but by using goto they can
   }
   else{
    xyz:
    printf("not valid\n");
   }
    return 0;
}