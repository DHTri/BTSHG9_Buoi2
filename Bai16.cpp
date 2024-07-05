#include <bits/stdc++.h>
using namespace std;
int snt(long long n)
{
  if( n < 2) return 0;
  for(int i=2;i<=sqrt(n);i++)
  {
      if(n%i == 0) return 0;
  }
  return 1;
}

int main()
{
  long long n;
  cin>>n;
  long long cs = 0;
  while(n>0)
  {
    if(snt(n%10)) cs++;
    n/=10;
  }
  cout<<cs;
} 
