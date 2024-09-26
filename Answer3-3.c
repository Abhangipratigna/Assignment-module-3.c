#include <stdio.h>

void main()
 {
    int numbers[10];
    int even = 0, odd = 0;
    int even_sum = 0, odd_sum = 0;

    printf("Enter 10 numbers :\n ");

    for (int i = 0; i < 10; i++)
    {
        printf("num %d :, i");
        scanf("%d", &numbers[i]);

    if(numbers[i] % 2 == 0)
    {
        even++;
        even_sum += numbers[i];
    }
    else
    {
        odd++;
        odd_sum += numbers[i];
    }
  }

     printf("numbers of even numbers : %d\n",even);
     printf("numbers of odd numbers : %d\n",odd);
     printf("sum of even numbers : %d\n",even_sum);
     printf("sum of odd numbers : %d\n",odd_sum);
}
