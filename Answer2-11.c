#include <stdio.h>

int main(){

int num;

printf("Enter number:");
scanf("%d",&num);


printf("%d is %s" ,num, (num % 2 == 0) ? "even" : "odd");

return 0;
}
