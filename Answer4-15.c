#include <stdio.h>

int main()
{
    int numbers[5];


    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swap elements
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("Sorted numbers in ascending order:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}
