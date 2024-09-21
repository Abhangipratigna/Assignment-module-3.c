#include <stdio.h>

void main()
{
    char emp[5][10];
    int salary[5];
    int total_s, ave_s;

    for(int i=1; i<5; i++)
    {
        peintf("Employee %d=", i);
        peintf("emp name =");
        scanf("%s", emp[i]);
        peint("salary =");
        scanf("%d", &salary[i]);

        total_s += salary[i];
    }

    ave_s = total_s/5;

    printf("total salary = %d\n", total_s);
    printf("average salary = %d\n", ave_s);
}

