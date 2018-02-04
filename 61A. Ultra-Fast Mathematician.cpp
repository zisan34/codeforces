#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3="";
    int i=0;
    cin>>s1;
    cin>>s2;
    for(i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[i])
            s3+='0';
        else
            s3+='1';
    }
    cout<<s3<<endl;
    return 0;
}
