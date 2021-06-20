#include<stdio.h>
int main()
{
int a=2,b=3;
float c=0;
c=(a-b)^2+2*(a*b)+3*(a^2*b);
printf("%f",c);
return 0;
}