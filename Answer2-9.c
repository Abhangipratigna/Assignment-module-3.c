#include<stdio.h>
//#include<ctype.h>

int main()
{
	char Ch;

  	printf(" Enter a charachter :  ");
  	scanf("%c", &Ch);

  	if (islower(Ch))
    {
        if (isupper(Ch))
        {
            printf("%c is uppercase", Ch);
        }
        else
        {
            printf("%c is lowercase", Ch);
        }
    }
    else{
        printf("%c is digit", Ch);
    }
}
