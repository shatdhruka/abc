#include<stdio.h>
void main()
{
int year;
printf("\n Enter the year:");
scanf("%d",&year);

if(year%100==0 || year%4==0 || year%400==0)
printf("%d is leap year",year);
else
printf("%d is not a leap year",year);
}
