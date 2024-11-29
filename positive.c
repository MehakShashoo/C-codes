//wap to read a number from the user anf if number is +ve print the cube otherwise print the square of that number.
#include <stdio.h>
int main (){
    int a;
    printf("enter number=");
    scanf("%d", &a);
    if (a>0){
        printf("cube=%d", a*a*a);
    }
else{
    printf("square=%d",a*a);
}
    return 0;
}