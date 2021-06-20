#include<stdio.h>
#include<stdlib.h>
int main()
{
    //long size=10E9;
    int a[100000],b[100000];
    int t,n,c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        c=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++)
            scanf("%d", &a[j]);
        for(int j=0;j<n;j++)
            scanf("%d", &b[j]);
        int diff=a[0]-0;
        if(diff>=b[0])
            c++;
        for(int j=0;j<n-1;j++){
            diff=abs(a[j]-a[j+1]);
            if(diff>=b[j+1])
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}