#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    int i=0;
    while(i<n)
    {
        cin>>s[i];
        i++;
    }
    i=0;
    int j,count=1,max=1;
    for(i=0,j=1;j<n;j++,i++)
    {
        if(s[j]>=s[i])
            count++;
        else
            count=1;
///        cout<<count<<endl;
        if(count>max)
            max=count;
    }
    cout<<max<<endl;
    return 0;
}
