#include <stdio.h>

void main()
{
    int number, n1, sum;

   printf("Enter a number :");
   scanf("%d", &number);

   while (number != 0)
   {
       n1 = number % 10;
       sum += n1;
       number /= 10;
   }

    printf("Sum of num = %d\n", sum);

    return 0;
}


