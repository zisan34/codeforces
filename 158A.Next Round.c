#include<stdio.h>
int main()
{
    int i,n,k,a[100],count=0;
    while(scanf("%d%d",&n,&k)==2)
    {
        count=0;
        for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0&&a[i]>=a[k-1])
            count++;
    }
    printf("%d\n",count);
    }
    return 0;
}
