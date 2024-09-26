#include <stdio.h>

int main()
 {

  int n,n1=1,n2=2,sum;

  printf("Enter number :");
  scanf("%d",&n);

  printf("num in series : %d- %d-",n1,n2);

  for(int i=3;i<=n;i++)
  {
      sum = n1+n2;
      printf("%d-", sum);
      n1=n2;
      n1=sum;
  }

  printf("\n");

  return 0;
}
