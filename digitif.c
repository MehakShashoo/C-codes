//wap to check if a number is two digit 3 digit or more than 3 digit
#include<stdio.h>
int main (){
int a;
printf("enter a=");
scanf("%d",&a);
if(1<=a && a<=9){
printf("one digit number");
}
else if (10<=a && a<=99){
    printf("two digit number");
}
else if (100<=a && a<=999){
    printf("three digit number");
}
else{
    printf("more than 3 digit");
}
    return 0;
}

/*#include<stdio.h>
int main (){
    int y=10000;
    int y=34;                        (compile time error) 
    printf("hello%d\n",y);
    return 0;
}*/




/*#include<stdio.h>
int main()
{
    int n,customer_id;
    float bill;
    printf("Enter customer id = ");
    scanf("%d",&customer_id);
    printf("Enter units = ");
    scanf("%d",&n);
    if(n<=199)
    {
        bill=n*1.20;
    }
    else if(n>=200 && n<400)
    {
        bill=n*1.50;
    }
    else if(n>=400 && n<600)
    {
        bill=n*1.80;
    }
    else 
    {
        bill=n*2;
    }
    if(n>400)
    {
        bill=bill+(bill)*0.15;
    }
    if(bill<100)
    {
        bill=100;
    }
    printf("%d %.2f",customer_id,bill);
       return 0;
}*/