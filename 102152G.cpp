#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll ans=0;
    ans=ans+abs(x1-x2)+abs(y1-y2);
    cout<<ans<<"\n";
  }
  return 0;
}
