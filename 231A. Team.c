#include<stdio.h>
int main()
{
    int n,p1,p2,p3,count,solution=0;
    while(scanf("%d",&n)==1)
        {
            solution=0;
    while(n--)
    {
        count=0;
        scanf("%d%d%d",&p1,&p2,&p3);
        if(p1+p2+p3>=2)
            count=1;
            if(count==1)
                solution++;
    }
    printf("%d\n",solution);
        }
}
