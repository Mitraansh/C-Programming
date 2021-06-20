#include<stdio.h>

int main()
{
    int radius;
    float PI=3.14,area,ci;

    printf("Enter the Radius of Circle: ");
    scanf("%d",&radius);

    ci = 2 * PI * radius;
    printf("Circumference of a Circle is %f : ",ci);

    return(0);
}