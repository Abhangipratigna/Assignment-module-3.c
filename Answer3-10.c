#include <stdio.h>

int main()
{
    int num, sum, firstDigit, lastDigit;


    printf("Enter a number : ");
    scanf("%d", &num);


    lastDigit = num % 10;
    firstDigit = num;

    while(firstDigit >= 10)
    {
      firstDigit /= 10;
    }

    sum = firstDigit + lastDigit;

    printf("Sum of first and last digit = %d", sum);

    return 0;
}

