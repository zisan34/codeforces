#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int soldier[n];
    int i=0,max_n,min_n,max=0,min=1000,time=0;;
    while(i<n)
    {
        cin>>soldier[i];
        i++;
    }
    i=0;
//    while(i<n)
//    {
//        cout<<soldier[i]<<" ";
//        i++;
//    }
    i=0;
    for(i=n-1;i>=0;i--)
    {
        if(max<=soldier[i])
        {
            max_n=i;
            max=soldier[i];
            //cout<<max_n<<" "<<soldier[i]<<endl;
        }
    }
    for(i=0;i<n;i++)
    {
        if(min>=soldier[i])
            {
                min_n=i;
                min=soldier[i];
            }
    }
///    cout<<max_n<<endl<<min_n<<endl;
    if(min_n>max_n)
        time=(max_n-1)+(n-min_n);
    else
        time=((max_n-1)+(n-min_n))-1;
    cout<<time<<endl;
}
