
#include <stdio.h>

int main()
{
    int num[] = { 2, 9, 5, 3, 7 };

    int n = sizeof(num) / sizeof(num[0]);

    int max = num[0];

    printf("size of num is :%d ", sizeof(num));
    printf("\n");


    for (int i = 1; i < n; i++)
        {
            if
            (num[i] > max)
            {
                max = num[i];
            }
    }

    printf("the maximum element is: %d\n", max);

    return 0;
}

