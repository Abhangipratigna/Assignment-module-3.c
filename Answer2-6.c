#include<stdio.h>
int main()
{

  char ch;

 printf("Enter character =");
  scanf("%c",&ch);

  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
  {
    printf("Character is Vowel");
  }
  else
  {
   printf("Character is consonant");
 }
 return 0;
}
