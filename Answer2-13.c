#include <stdio.h>

int main(){

    int a, b, c, min;

    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter secound number:");
    scanf("%d", &b);
    printf("Enter third number:");
    scanf("%d", &c);

    min = ( a > b ) ? (a > c ? a : c) : ( b > c ? b : c);

    printf("the minmum number is: %d\n",min);

return 0;

}
