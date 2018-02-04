#include<stdio.h>
#include<string.h>
int main()
{
    char x[100];
    int n;
    scanf("%d",&n);
    n++;
    while(n--)
    {
        gets(x);
        int l=strlen(x);
        //printf("%d\n",l);
        if(l>10)
        {
            printf("%c%d%c\n",x[0],l-2,x[l-1]);
        }
        else
            printf("%s\n",x);
    }
    return 0;
}
