#include<stdio.h>

int main()
{
    int Physics,Chemistry,Maths;
    float total;
printf("Enter Chemistry marks");
scanf("%d",&Chemistry);
printf("Enter maths marks");
scanf("%d",&Maths);
printf("Enter physics marks");
scanf("%d",&Physics);
total=(Physics+Maths+Chemistry)/3;
if((total<40)||Physics<33||Maths<33||Chemistry<33)
printf("Your total percentage is %f and you are fail",total);
else
{
printf("your total percentage is %f and you are pass",total);
}
    return 0;
}       