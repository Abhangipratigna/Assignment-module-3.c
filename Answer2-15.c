#include <stdio.h>

void main()
{

int physics, chemistry, maths , total, math_phy, candidate;

printf("Input the marks obtained in physisc :");
scanf("%d",&physics);
printf("Input the marks obtained in chemistry :");
scanf("%d",&chemistry);
printf("Input the marks obtained in maths :");
scanf("%d",&maths);

total = physics + chemistry + maths;
math_phy = maths + physics;

printf("total of subject is:%d\n", total);
printf("total of maths and physics is %d\n", math_phy);

if(maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 100)
{
    candidate = 1;
}
else if (math_phy >= 140)
{
    candidate = 1;
}
if (candidate)
{
    printf("the candidate is eligible for addmission");
}
else
{
    printf("the candidate is eligible for addmission");
}

}

