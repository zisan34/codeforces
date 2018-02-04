#include<iostream>
using namespace std;
int main()
{
    int col=0,tmp=0;
    cin>>col;
    int cube[col];
    for(int i=0;i<col;i++)
    {
        cin>>cube[i];
    }
    for(int i=0;i<col;i++)
    {
        for(int i=1;i<col;i++)
    {
        if(cube[i-1]>cube[i])
        {
            tmp=cube[i-1]-cube[i];
            cube[i-1]-=tmp;
            cube[i]+=tmp;
        }
    }
    }
    for(int i=0;i<col;i++)
    {
        cout<<cube[i]<<" ";
    }
    cout<<endl;

}
