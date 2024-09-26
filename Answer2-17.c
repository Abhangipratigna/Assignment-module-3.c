#include <stdio.h>

float main()
{
float a,b,c, sum;

printf("enter value of angles : a:");
scanf("%f",&a);
printf("enter value of angles : b:");
scanf("%f",&b);
printf("enter value of angles : c:");
scanf("%f",&c);

sum = a + b + c;

if (sum == 180)
{
   printf("triangle can be formed");
}
else
{
    printf("triangle can not be formed");
}

}
