#include <stdio.h>


int main() {
    char str[10];
    int i;

    printf("Enter a string : ");
    scanf("%s", str);

    printf("Individual characters :\n");

    for(i = 0; str[i]!='\0';i++)
{


    printf("%c\n", str[i]);
}
	return 0;
}
