#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);


    switch (character) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel", character);
            break;

        default:
            if((character >= 'a'&& character <= 'z')||(character >= 'A'&& character <= 'Z'))
            {
                printf("%c is a consonant", character);
            }
            else
            {
                printf("%c is not a consonant.\n", character);
            }
            break;
    }


}
