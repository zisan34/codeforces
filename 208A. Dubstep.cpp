#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s,x;
    x="";
    cin>>s;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='W')
        {
            if(s[i+1]=='U'&&s[i+2]=='B')
            {
                i+=2;
                x+=" ";
            }
            else
                x+=s[i];
        }
        else
            x=x+s[i];
    }
    cout<<x<<endl;
    return 0;
}
