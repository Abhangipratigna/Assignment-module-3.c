#include <stdio.h>

int main(){

char name[10];

printf("Enter the country's name =");
scanf("%s", &name);

printf("Abbreviated name = %c%c",name[0],name[1]);

return 0;

}
