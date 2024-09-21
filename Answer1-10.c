#include <stdio.h>

int main(){

float area , l, w, h;

printf("Enter length of rectangular prism =");
scanf("%f", &l);

printf("Enter width of rectangular prism =");
scanf("%f", &w);

printf("Enter height of rectangular prism =");
scanf("%f", &h);

area = 2*((w*l)+(h*l)+(h*w));

printf("\nArea of rectangular prisam is = %f",area);

return 0;


}
