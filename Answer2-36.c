#include <stdio.h>

int main()
{

    float units, amount, surcharge, total_amount;

    printf("Enter the total number of units = ");
    scanf("%f", &units);


    if(units <= 50)
    {
        amount = units * 0.50;
    }
    else if(units <= 150)
    {
        amount = 25 + ((units-50) * 0.75);
    }
    else if(units <= 250)
    {
        amount = 100 + ((units-150) * 1.20);
    }
    else
    {
        amount = 220 + ((units-250) * 1.50);
    }


    surcharge = amount * 0.20;
    total_amount  = amount + surcharge;

    printf("charge :%f \n",surcharge);
    printf("amount :%f \n",amount);
    printf("total Electricity bill(total_ampunt = amount + charge): %f",total_amount);

    return 0;
}
