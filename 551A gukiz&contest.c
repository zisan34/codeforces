#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int rank[n],p[n],i,j,k;
        for(i=0;i<n;i++)
        {
            scanf("%d",&rank[i]);
        }
        for(i=0;i<n;i++)
        {
            p[i]=1;
            for(j=0;j<n;j++)
            {
                if(rank[i]<rank[j])
                    p[i]=p[i]+1;
            }
        }
        for(k=0;k<n;k++)
        {
            printf("%d ",p[k]);
        }
        printf("\n");
    }
}
