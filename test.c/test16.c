#include<stdio.h>
int main(){
    int a;
    printf("enter age=");
    scanf("%d",&a);
    if(a>=18){
        printf("person can vote");
    }
    else{
        printf("person cannot vote");
    }
    return 0;
}