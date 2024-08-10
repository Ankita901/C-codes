#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter the number");
    scanf("%d",&a);
    if(a%2==0)
    {
    printf("The number is even %d",a);
    }
    else{
        printf("The number is odd %d",a);
    }
    return 0;
}