#include <stdio.h>
#include<stdlib.h>
int main()
{
    int q;
    scanf("%d",&q);
    while (q--){
        int n,k;
        int integers[n];
        scanf("%d %d",&n,&k);
        int i;
        for(i=0;i<n;i++){
            scanf("%d",&integers[i]);
        }
        int size=sizeof(integers)/sizeof(integers[0]);
        i=0;
        int j=1;
        int x=0;
        while(i<size && j<size){
            if(i!=j && abs(integers[j]-integers[i])<=k){
                x+=1;
            }
            else{x+=0;}
        }
        if(x==n){
            printf("YES");
        }
        else{printf("NO");}
    }
	return 0;
}