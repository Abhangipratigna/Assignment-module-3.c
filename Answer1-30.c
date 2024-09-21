#include <stdio.h>

void main()
{
int year, days;

printf("Enter num of year =");
scanf("%d",&year);

days = year*365;
printf("number of days is :%d",days);
printf("\n");

printf("Enter num of days =");
scanf("%d",&days);

year = days/365;
printf("number of year is:%d",year);


}




