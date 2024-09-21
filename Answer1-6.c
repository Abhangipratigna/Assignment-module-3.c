#include <stdio.h>

int main(){

float b,h,area;
printf("find area of triangle formula = A = 1/2 * b * h\n");

printf("\nEnter base of triangle =");
scanf("%f",&b);

printf("\nEnter height of triangle =");
scanf("%f",&h);


area=(b*h)/2;
printf("Area of triangle is:%.2f\n",area);

return 0;
}
