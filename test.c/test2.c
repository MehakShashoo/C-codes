#include<stdio.h>
int main(){
float radius,length,breadth,side,height,base;
float pi=3.14;
//circle
printf("enter radius of circle=");
scanf("%.2f",&radius);
printf("Area of circle=%f\n",pi*radius*radius);
printf("perimeter of circle=%f\n",2*pi*radius);
//square
printf("enter side of square=");
scanf("%f",&side);
printf("Area of square=%f\n",side*side);
printf("perimeter of square=%f\n",4*side);
//rectangle
printf("enter length of reactangle=\n");
printf("enter breadth of reactangle=\n");
scanf("%f%f",& length,breadth);
printf("Area of rectangle=%f\n",length*breadth);
printf("perimeter of rectangle=%f\n",2*(length+breadth));
//triangle
printf("enter base of triangle=");
scanf("%f",&base);
printf("enter height of triangle=");
scanf("%f",&height);
printf("Area of triangle=%f\n",0.5*base*height);
    return 0;
}