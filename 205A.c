#include<stdio.h>
int main()
{
    long int n,x,i,m_t,c=0,count=0;
    scanf("%d",&n);
    long int a[n];
    x=0;
    while(x<n)
    {
        scanf("%ld",&a[x]);
        x++;
    }
    m_t=a[0];
    for(i=1;i<n;i++)
    {

        if(a[i]<m_t)
        {
            m_t=a[i];
            c=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(m_t==a[i])
            count++;
    }
    if(count==1)
        printf("%d",c+1);
    else
        printf("Still Rozdil");
    return 0;

}
