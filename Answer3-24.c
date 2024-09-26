#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter number :");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;
    printf("sum of num from 1 to %d = %d\n", n, sum);

}
