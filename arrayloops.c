#include <stdio.h>
#include<stdlib.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--){
        int n;
        int integers[n];
        int y[n];
        int k,x;
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d",&integers[i]);
        }
        for(int i=0;i<n;i++){
            y[i]=abs(integers[i]-integers[i+1]);}
	printf("%d",y[n]);
        for(int i=0;i<n;i++){
            if(y[i]<=k){
                x=1;
            }
            else{
                x=0;
            }
        }
        if(x==1){
            printf("YES");
        }
        else{
            printf("NO");}
    }
	return 0;
}