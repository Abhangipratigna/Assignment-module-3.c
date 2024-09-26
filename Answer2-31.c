#include <stdio.h>

void main()
{
   int month;

   printf("Enter month number =");
   scanf("%d",&month);

   if (month ==2)
   {
       printf("this month has 28 days");
   }
   else if (month == 4 || month == 6 || month == 9 || month == 11)
   {
       printf("this month has 30 days");
   }
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("this month has 31 days");
    }
    else
    {
        printf("please enter valid number");
    }

}

