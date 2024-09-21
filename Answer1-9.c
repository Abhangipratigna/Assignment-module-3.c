#include <stdio.h>

int main(){

float a,b,c,perimeter,s,Area;
printf("\n please Enter three sides of triangle:\n");
scanf("%f%f%f",&a,&b,&c);

perimeter = a+b+c;
s = (a+b+c)/2;
Area = sqrt(s*(s-a)*(s-b)*(s-c));


printf("\nperimeter of traiangle = %.2f\n",perimeter);
printf("\nsemi perimeter of traingle = %.2f\n",s);
printf("\nArea of triangle = %.2f\n",Area);

return 0;
}
