#include <stdio.h>

int main() {

    char str1[100], str2[100], combined_str[200];
    int i, j;


	printf("Enter the first string : ");
    scanf("%s", str1);

	printf("\nEnter the second string : ");
    scanf("%s", str2);


    for (i = 0; str1[i] != '\0'; i++);
    {
        combined_str[i] = str1[i];
    }


    for (j = 0; str2[j] != '\0'; j++)

    {
        combined_str[i + j] = str2[j];
    }

   combined_str[i + j] = '\0';

    printf("combined string : %s\n", str1, str2);

	return 0;
}

