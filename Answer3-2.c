#include <stdio.h>

int main()
{

int num[5];

printf("Enter 5 number =\n");

for(int i =0; i < 5; i++)
{
    printf("num 5d =",i);
    scanf("%d",&num[i]);
}
printf("Display entered number\n");

for(int i =0; i < 5; i++)
{
    printf("num 5d =",i);
    scanf("%d",num[i]);
}

return 0;

}

