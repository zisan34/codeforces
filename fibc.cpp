#include <iostream>
using namespace std;
long long  dp[200];

long long F( long long  n ) {
if( n == 0 ) return 0;
if( n == 1 ) return 1;
if( dp[n]!=-1 ) return dp[n];
else
{
dp[n] = F( n-1 ) + F( n-2 );
return dp[n];
}
}


int main()
{

   long long  n;
   cin>>n;
   for(int i=0;i<200;i++)
    dp[i]=-1;
  long long res=F(n);
   cout<<res<<endl;
}
