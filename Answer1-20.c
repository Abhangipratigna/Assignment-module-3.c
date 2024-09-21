#include <stdio.h>

void main(){

float salary;
float insurance;
float loan;
float rs;

printf("Enter salary:");
scanf("%f",&salary);

insurance = 0.1 * salary;
loan = 0.1 * salary;
rs = salary - insurance - loan;

printf("insurance:%f\n",insurance);
printf("loan:%f\n",loan);
printf("rs:%f\n",rs);

}
