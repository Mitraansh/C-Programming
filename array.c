#include <stdio.h>
#include<math.h>
int main()
{
    int q;
    while(q--){
        int arr[100000];
        int i,n,k,testcases,res=0;
        scanf("%d %d",&testcases,&k);
        for(i=0;i<testcases;i++){
            scanf("%d",&arr[i]);
        }
        n=sizeof(arr)/sizeof(arr[0]);
        for(i=0;i<=n-k;i++){
            res=arr[i];
            for(int j=1;j<k;j++){
                if (arr[i+j]>res)
                    res=arr[i+j];
                
            }
            printf("%d",res);}}
	return 0;
}