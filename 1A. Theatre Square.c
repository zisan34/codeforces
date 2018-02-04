#include<stdio.h>
int main()
{
    long long int n,m,a,row,column;
    while(scanf("%lld%lld%lld",&n,&m,&a)!=EOF)
    {
        row=n/a;
        if(n%a!=0)
            row++;
        column=m/a;
        if(m%a!=0)
            column++;
        printf("%lld\n",row*column);
    }
    return 0;
}
