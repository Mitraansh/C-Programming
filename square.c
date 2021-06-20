#include <stdio.h>
#include<math.h>
int main()
{
    int q,start,end,m,count=0;
    float p;
    scanf("%d %d %d",&q,&start,&end);
    while(q>=1){
      while(start<=end){
          p=sqrt(start);
          m=p;
          if (p==m){count+=1;}
      }  
    }
    printf("%d",count);
	return 0;
}