#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            count++;
        }
    }
    if(count>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
