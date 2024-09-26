#include <stdio.h>

int main()
{
    float profit, loss, selling_price, cost;

    printf("Enter main cost =");
    scanf("%f",&cost);
    printf("Enter selling price =");
    scanf("%f",&selling_price);

    if(selling_price > cost)
    {
        profit = selling_price - cost;
        printf("profit is : %f", profit);
    }
    else if(cost > selling_price)
    {
        loss = cost - selling_price;
        printf("loss is : %f", loss);
    }
    else
    {
        printf("neither gain nor loss");
    }

}

