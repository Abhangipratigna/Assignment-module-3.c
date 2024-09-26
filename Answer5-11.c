#include <stdio.h>

int main() {

   char str[100];

   printf("Enter a sentence : ");
   fgets(str, sizeof(str), stdin);

   for (int i = 0; str[i] != '\0'; i++)
   {
       if(isalpha(str[i]))
       {
           str[i] = islower(str[i])? toupper(str[i]) : tolower(str[i]);
       }
   }

   printf("modified sentence: %s", str);

   return 0;
}

