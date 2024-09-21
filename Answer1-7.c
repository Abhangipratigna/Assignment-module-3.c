#include <stdio.h>

int main(){

float length, width, area;

printf("Enter area of length =");
scanf("%f", &length);
printf("Enter area of width =");
scanf("%f", &width);

area = length*width;
printf("Area of rectangle length %.2f and width %.2f is %.2f \n",length, width, area);

}
