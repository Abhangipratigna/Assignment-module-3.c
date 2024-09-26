#include <stdio.h>

int main()
 {
    char str[100];
    int i, count = 0;

    printf("Enter a string : ");
    scanf("%s", str);

for (i = 0; str[i] != '\0'; i++)
{
    if(str[i] == ' ')
    {
        count++;
    }
}

count++;

printf("Total number of words : %d\n", count);

	return 0;
}


