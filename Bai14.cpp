#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  cin>>n;
  long long csc = 0, csl =0;
  while(n>0)
  {
    if((n%10) % 2 ==0 )
      csc++;
    else  
      csl++;
    n/=10;
  }
  cout<<csc<<" "<<csl;
} 
