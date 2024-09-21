#include <stdio.h>

int main(){

int number3,number4;

printf("Enter the number3:");
scanf("%d",&number3);

printf("Enter the number4:");
scanf("%d",&number4);


int mulResult = number3*number4;
int divResult = number3/number4;

printf("\nmultiplication of %d and %d is : %d",number3,number4,mulResult);

printf("\ndivision of %d and %d is : %d",number3,number4,divResult);

return 0;


}
