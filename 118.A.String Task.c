#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    while(gets(s)==1)
    {
        int l,i=0,count=0;
        l=strlen(s);
        printf("%s",s);
        for(i=0;i<l;i++)
        {
            printf("%d\n",count); count++;
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                printf("%d\n",count); count++;
                continue;
            }
            else
            {
                if(s[i]>'A'&&s[i]<'Z')
                    printf(".%c",s[i]+'a');
                else
                    printf("%c",s[i]);
                    printf("%d\n",count); count++;

            }
        }
    }
}
