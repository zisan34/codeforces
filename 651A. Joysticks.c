#include<iostream>
using namespace std;
int main()
{
    int j1,j2,count=0;
    cin>>j1>>j2;
    while(j1>0||j2>0)
    {
        if(j1>=j2)
        {
            j1=j1-2;
            j2=j2+1;
        }
        else
        {
            j1=j1+1;
            j2=j2-2;
        }
        count++;
    }
    cout<<count;
}
