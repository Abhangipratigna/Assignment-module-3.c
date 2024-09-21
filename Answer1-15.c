
#include <stdio.h>

int main(){

char fname[20],mname[20],lname[20];

printf("Enter the shool name:\n");
scanf("%S %s %s",fname,mname,lname);

printf("Abbreviated name:");
printf("%c %c %s", fname[0], mname[0], lname);

return 0;

}
