//convert number of totaldays into years, months and days
#include<stdio.h>
int main(){
    int total_days,years,months,days;
    printf("total number of days=");
    scanf("%d",&total_days);
    years=total_days/365;
    total_days=total_days%365;
    months=total_days/30;
    days=total_days%30;
    printf("years=%d\n",years);
    printf("months=%d\n",months);
    printf("days=%d\n",days);
    return 0;
}