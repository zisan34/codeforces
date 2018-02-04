#include<iostream>
using namespace std;
int main()
{
    int buttons;
    cin>>buttons;
    int total=0,acbuttons=0;
    while(buttons>0)
    {
        total+=buttons+((buttons-1)*acbuttons);
        buttons--;
        acbuttons++;
    }
    cout<<total<<endl;
}
