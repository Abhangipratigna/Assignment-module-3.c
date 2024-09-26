#include <stdio.h>

int main() {

    int j, i =1, sum = 0;

    while (i <= 10)
    {
        printf("Enter number %d :", i);
        scanf("%d", &j);

        sum = j + sum;
        i++;
    }

    printf("Sum of num is : %d\n", sum);

    return 0;
}
