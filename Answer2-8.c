#include <stdio.h>

int main(){

float height;

printf("Enter height :");
scanf("%d",&height);

if(height < 152)
{
    printf("you are short");
}
else if(height >= 152 && height < 167)
{
 printf("your height average");
}
else if(height >= 167 && height <= 195)
{
 printf("your are tall");
}
else
{
    printf("please enter valid height in cm");
}

}
