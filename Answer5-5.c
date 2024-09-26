#include <stdio.h>

int main() {

    char str1[100], str2[100];
    int i, equal = 1;


    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);


    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            equal = 0;
            break;
        }
    }

    if(str1[i] != '\0' || str1[i] != '\0')
    {
        equal = 0;
    }
    if(equal)
    {
        printf("The dtrings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}
