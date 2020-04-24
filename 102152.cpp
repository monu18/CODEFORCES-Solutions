#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    if((n+m)%2==0)
    {
      cout<<12<<"\n";
    }
    else
    {
      cout<<2<<"\n";
    }
  }
  return 0;
}
