#include <stdio.h>

int main(){

float celsius, fahrenheit;

printf("please Enter temperature in celsius: \n");
scanf("%f", &celsius);

fahrenheit =((celsius *9)/5)+32;

printf("\n %.2f celsius = %.2f fahrenheit",celsius, fahrenheit);
return 0;

}
