#include <stdio.h>

int main()
{
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("Even numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            printf("%d ", numbers[i]);
        }
    }

    printf("\nOdd numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");

    return 0;
}
