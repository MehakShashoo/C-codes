#include<stdio.h>
void getMessage(void);
int main()
{
    getMessage();       //function calling

    return 0;
}
void getMessage(void){          //void means no parameter given here
    printf("hello");                  //function definition
}
//



//user defined function can be declared before or after main function
//void means empty data set..


/*#include<stdio.h>
int main()
{
    getMessage(90);       //function calling

    return 0;
}
void getMessage(void){          //void means no parameter given here
    printf("hello");
}*/