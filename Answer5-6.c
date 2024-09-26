#include <stdio.h>

void main()
{
  char str[50];
  int i, alphabest = 0, digits = 0, special_chars = 0;

  printf("Enter a string: ");
  gets(str);

  for (i = 0; str[i] != '\0'; i++)
  {
    if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
      {
          alphabest++;
      }
    else if (str[i] >= '0' && str[i] <= '9')
    {
      digits++;
    }
    else
    {
       special_chars++;
    }
  }

  printf("alphabets: %d\n", alphabest);
  printf("digits: %d\n", digits);
  printf("special characters: %d\n", special_chars);

  return 0;

}


