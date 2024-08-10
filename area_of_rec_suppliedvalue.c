 #include<stdio.h>

    int main()
{
    int length, breadth,area;
    printf("What is the length of rectangle\n");
    scanf("%d", &length);
    printf("What is the breadth of rectangle\n");
    scanf("%d", &breadth);
    area= length * breadth;
    printf("The area of our rectangle is %d", area);
    return 0;
}