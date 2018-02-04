#include<stdio.h>
int main()
{
    int w;
    while(scanf("%d",&w)==1)
    {
        if(w==0||w==2||w<0)
        {
            printf("NO\n");
            continue;
        }
        if(w%2==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
