#include <stdio.h>
int main()
{
    int BS, TS;
    printf("Enter Basic salary=");
    scanf("%d", &BS);
    if (BS <= 2000)
    {
        TS = BS + (BS * 10 / 100) + (BS * 20 / 100);
    }
    else if (BS < 5000 && BS > 2000)
    {
        TS = BS + (BS * 20 / 100) + (BS * 30 / 100);
    }
    else if (BS < 10000 && BS > 5000)
    {
        TS = BS + (BS * 30 / 100) + (BS * 40 / 100);
    }
    else 
    {
        TS = BS + (BS * 50 / 100) + (BS * 50 / 100);
    }
    printf("Total salary=%d",TS);
    return 0;
}