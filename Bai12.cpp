#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  long long cs = 0;
  while(n>0)
  {
    cs++;
    n/=10;
  }
  cout<<cs;
} 
