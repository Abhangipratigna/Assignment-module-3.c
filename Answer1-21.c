#include <stdio.h>

void main()
{
  printf("Accept '2' numbers form user and swap 2 nummbers with using '3'rd variable and without using '3'rd variable");
  printf("\n");
  printf("without using 3rd variable");
  printf("\n");


  int a, b;
  printf("Enter a:");
  scanf("%d", &a);

  printf("Enter b:");
  scanf("%d", &b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("After swapping a = %d\n", a);
  printf("After swapping b = %d", b);
  printf("\n");

  printf("------------------------------------\n");
  printf("\n");

  int c, d, e;
  printf("\n");
  printf("with 3rd variable\n");

  printf("Enter c:");
  scanf("%d", &c);

  printf("Enter d:");
  scanf("%d", &d);


  e =  c;
  c =  d;
  d =  e;

  printf("After swapping c = %d\n", c);
  printf("After swapping d = %d", d);

}
