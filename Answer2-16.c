#include <stdio.h>

void main()
{
    int temp;

    printf("Input days temperature : ");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing weather.\n");
    }

    else if (temp >= 0 && temp < 10)
    {
        printf("Very cold weather");
    }

    else if (temp >=10 && temp < 20)
    {
        printf("Cold weather.\n");
    }

    else if (temp >=20 && temp < 30)
    {
        printf("Normal in temp.\n");
    }

    else if (temp >=30 && temp < 40)
        {
        printf("It is very hot");
        }


}

