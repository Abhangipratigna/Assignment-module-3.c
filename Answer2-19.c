#include <stdio.h>

void main()
{
    int customer, unit;
    float price;
    char name[10];

    printf("Enter customer ID =");
    scanf("%d",&customer);

    printf("Enter customer name =");
    scanf("%d",&name);

    printf("Enter units consumed =");
    scanf("%d",&unit);

    if (unit <= 350)
    {
        price = unit * 1.20;
    }
    else if (unit <= 600)
    {
        price =(350 * 1.20)+ ((unit - 350)* 1.50);
    }
    else if (unit <= 800)
    {
        price =(350 * 1.20) + (250 * 1.50) +  ((unit - 600)* 1.80);
    }
    else
    {
         price =(350 * 1.20) + (250 * 1.50) + (200 * 1.80) +((unit - 800)* 2.00);
    }

    printf("customer ID = %d\n",customer);
    printf("customer name= %s\n",name);
    printf("units usrd = %d\n",unit);
    printf("total Amount = %f\n",price);

}
