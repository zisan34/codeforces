#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,d=0,n=0,i=0;
    char s[1000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(a<d)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
