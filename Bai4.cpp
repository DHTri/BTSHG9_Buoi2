#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;cin>>n;
  double tong = 0;
  for(int i=1;i<=n;i++)
  {
    tong += 1.00*1/i;
  }
  cout<<fixed<<setprecision(3)<<tong;
} 
