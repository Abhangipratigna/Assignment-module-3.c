#include<stdio.h>

int main()
{
    char op;
    int a,b,result;

    printf("enter operator:(+,-,*,/)");
    scanf("%c",&op);

    printf("Enter num1 =");
    scanf("%d",&a);

    printf("Enter num2 =");
    scanf("%d",&b);

    switch(op)
    {
        case'+':
        result = a + b;
        printf("%d + %d = %d",a,b,result);
        break;

        case'-':
        result = a - b;
        printf("%d - %d = %d",a,b,result);
        break;

        case'*':
        result = a * b;
        printf("%d * %d = %d",a,b,result);
        break;

        case'/':
        result = a / b;
        printf("%d / %d = %d",a,b,result);
        break;

        default:
        printf("Invalid operator");
    }


}
