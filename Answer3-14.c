#include <stdio.h>

    int factorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else
        {
            return n * factorial(n - 1);
        }
    }
   void main()
   {

     int num, i;

    printf("Enter 5 number: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        if (num < 0)
        {
            printf("Error : factorial of a negative number is undefined :\n");
        }
        else
        {
            long long fact = factorial(num);
            printf("factorial of %d = %11d\n", num, fact);
        }
    }

}
