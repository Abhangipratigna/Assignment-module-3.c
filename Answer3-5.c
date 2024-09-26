#include <stdio.h>

void main(){

  int num, factorial = 1;

  printf("Enter number : ");
  scanf("%d", &num);

  printf("Multiplication of %d", num);

  for ( int i = 1; i <= num; ++i)
  {
      factorial *= i;
  }

    printf("factorial of %d = %d\n", num, factorial);


  return 0;
}
