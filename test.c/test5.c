/*#include<stdio.h>
int main(){
    return 0;
}*/
#include<stdio.h>
int main(){
    int a,b,c,d,e,total_marks,percentage;
    printf("Enter marks of maths=");
    scanf("%d",&a);
    printf("Enter marks of english=");
    scanf("%d",&b);
    printf("Enter marks of science=");
    scanf("%d",&c);
    printf("Enter marks of history=");
    scanf("%d",&d);
    printf("Enter marks of hindi=");
    scanf("%d",&e);
    total_marks=a+b+c+d+e;
    printf("Total marks=%d\n",total_marks);
    percentage=total_marks/5;
    printf("Percentage=%d",percentage);

    return 0;
}