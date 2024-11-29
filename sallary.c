#include <stdio.h>
int main()
{
    int BS, GS;
    printf("enter the BS=");               
    scanf("%d", &BS);
    if (BS <= 2000)
    {
        GS = BS + (BS * 10 / 100) + (BS * 20 / 100);
    }
    else if (BS <= 5000 && BS > 2000)
    {
        GS = BS + (BS * 20 / 100) + (BS * 30 / 100);
    }
    else if (BS <= 10000 && BS > 2000)
    {
        GS = BS + (BS * 30 / 100) + (BS * 40 / 100);
    }
    else
    {
        GS = BS + (BS * 40 / 100) + (BS * 50 / 100);
    }
    printf("average salary=%d", GS);
    return 0;
}