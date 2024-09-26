#include <stdio.h>

void main()
{
  int num;

  printf("Enter num =");
  scanf("%d",&num);

  if(num>=0)
  {
      printf("num is positive");
  }
  else if(num<0)
  {
    printf("num is Negative");
  }
  else
  {
      printf("num is zero");
  }

}
