#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long int n;
    int x,count=0;
    unsigned int c1=0,c2=0,c3=0,c4=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x==4)
            c4++;
        else if(x==3)
            c3++;
        else if(x==2)
            c2++;
        else if(x==1)
            c1++;
    }
    count+=c4;
    c4=0;
    count+=c3;
    c1-=c3;
    cout<<c1<<endl;
    c1/=2;


//    int n, ara[10050],k,i,j,temp = 0, check, count = 0;
//    cin >> n;
//    for(int i = 0; i<n; i++){
//        cin >> ara[i];
//    }
//    sort(ara,ara + n);
//    for(int i = n-1; i>=0; i--)
//    {
//        if(temp==4){
//            count++;
//            temp = 0;
//        }
//        else if(temp>4){
//            count++;
//            temp = temp - ara[i+1];
//            temp = temp + ara[i];
//        }
//        else
//            temp = temp + ara[i];
//    }
//    if(temp>4)
//        count = count + 2;
//    else if(temp >0)
//        count = count + 1;
//    cout << count << endl;
    return 0;

}
