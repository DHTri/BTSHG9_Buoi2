#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;cin>>n;
  double tong = 0;
  for(int i=2;i<=n;i+=2)
  {
    tong += 1.00*1/i;
  }
  cout<<fixed<<setprecision(2)<<tong;
} 
