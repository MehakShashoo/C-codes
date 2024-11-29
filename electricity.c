/*Write a program to calculate and print the electricity bill of a given customer.
The customer ID and unit consumed by the user should be captured from the keyboard to display the total amount
to be paid to the customer.
The charge are as follow :
unit                                    charge per unit(in rupees)
upto 199                                 1.20
200 and above but less than 400          1.50
400 and above but less than 600          1.80
600 and above                            2.00
if the bill exceeds 400 then a surcharge of 15% is charged and the minimum bill should be 100*/

#include <stdio.h>
int main()
{
   int n,customerID;
    float bill,totalbill;
    printf("Enter Customer ID=");
    scanf("%d", &customerID);
    printf("Enter n=");
    scanf("%d", &n);
    if (n <= 199)
    {
        bill = n*1.20;
    }
    else if (n >= 200 && n< 400)
    {
        bill =n*1.50;
    }
    else if (n >= 400 &&n < 600)
    {
        bill =n*1.80;
    }
    else
    {
        bill=n* 2.00;
    }
    if (n > 400)
    {
        totalbill=bill+ (bill*0.15);
    }
    if (bill>100)
    {
        bill=100;
    }
    printf("Total Bill=%0.2f", totalbill);
    return 0;
}

