#include<iostream>
#include<string>
using namespace std;
int main()
{
    string in,out;
    out="";
    int count=0;
    cin>>in;
    for(int i=1;i<in.length();i++)
    {
        if(in[i]>='A'&&in[i]<='Z')
            count++;
    }
    if(count==in.length()-1)
    {
        if(in[0]>='A'&&in[0]<='Z')
            in[0]=in[0]+32;
        else
            in[0]=in[0]-32;
        out=out+in[0];
        for(int i=1;i<in.length();i++)
        {
            in[i]=in[i]+32;
            out=out+in[i];
        }
    }
    else
        out=in;
    cout<<out;
    return 0;
}
