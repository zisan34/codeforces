#include<stdio.h>
int main()
{
    int a,b,m,n,count;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        count=0;
        for(a=0;a<=n;a++)
        {
            for(b=0;b<=n;b++)
            {
                if((a*a)+b==n)
                {
                    if(a+(b*b)==m)
                        count++;
                }
            }
        }
        printf("%d\n",count);
    }

}
