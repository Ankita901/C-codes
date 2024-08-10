#include<stdio.h>

int main()
{
    int a,b,c,d;
printf("Enter first num");
scanf("%d",&a);
printf("Enter second num");
scanf("%d",&b);
printf("Enter third num");
scanf("%d",&c);
printf("Enter forth num");
scanf("%d",&d);
if(a>b && a>c && a>d)
{
    printf("%d is greator",a);
}
else if(b>a && b>c && b>d)
{
    printf("%d is greator",b);
}
else if(c>a && c>b && c>d)
{
    printf("%d is greator",c);
}
else
{
    printf("%d is greator",d);
}
    return 0;
}