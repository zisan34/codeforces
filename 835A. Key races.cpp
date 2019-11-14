#include<iostream>
using namespace std;
int main()
{
    int chars,v1,v2,t1,t2;
    cin>>chars>>v1>>v2>>t1>>t2;

    int p1,p2;

    p1=(chars*v1)+(t1*2);
    p2=(chars*v2)+(t2*2);

    if(p1>p2)
    {
        cout<<"Second"<<endl;
    }
    else if(p2>p1)
    {
        cout<<"First"<<endl;
    }
    else
        cout<<"Friendship"<<endl;

}
