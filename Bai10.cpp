#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;cin>>n;
  long long tong = 1;
  for(int i=1;i<=n;i++)
  {
    tong *= i;
  }
  cout<<tong;
} 
