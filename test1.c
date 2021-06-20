#include <stdio.h>
int main()
{
    long  int price,quantity,totexp;
    scanf("%ld %ld",&quantity,&price);
    if(quantity >= 1000){
        totexp=(quantity*price);
        totexp=totexp-(totexp*10/100);}
    else{totexp=quantity*price;}
    printf("%ld",totexp);
	return 0;
}