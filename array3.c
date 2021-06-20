#include<stdio.h>
#include<math.h>
int main()
{
	int n=6, k=2, i;
	int arr[]={1,2,-2,5,-1,2};
	int j, maxsum = 0;
	for (i = 0; i <k; i++){
		maxsum=maxsum+arr[i];
	}
	int wsum=maxsum;
	for(i=k;i<n;i++){
		wsum=wsum+arr[i]-arr[i-k];
		maxsum=fmax(maxsum,wsum);
    	}
	printf("%d",maxsum);
	return 0;
}