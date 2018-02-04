#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int to[n],from[n];
    int i=0;
    while(i<n)
    {
        scanf("%d",&to[i]);
        i++;
    }
    i=0;
    /*
    while(i<n)
    {
        printf("%d",to[i]);
        i++;
    }
    */
//    printf("\n");
    int j=0,k=0;
    while(j<n)
    {
        for(k=0;k<n;k++)
        {
            if(to[k]==j+1)
                from[j]=k+1;
        }
        j++;
    }
    i=0;
    while(i<n)
    {
        printf("%d ",from[i]);
        i++;
    }
    return 0;
}
