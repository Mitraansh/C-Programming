#include <stdio.h>
#include <string.h>
int main() {
int t;
scanf("%d",&t);
while(t--){   
    char S1[101],S2[101];
    scanf("%s %s",S1,S2);
    int c1=0,c2=0,i;
    for(i=0;i<strlen(S1);i++){
            if((S1[i]!='?')==(S2[i]!='?'))
            c2++;
           else if( S1[i]!='?' && S2[i]!='?')
            c1++; }
       int x=strlen(S1)-c2;
        printf("%d %d\n",c1,x);}
    return 0;}