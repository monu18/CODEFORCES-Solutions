#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    ll ans=0;
    ll temp=0;
    if (a%c==0) {
      /* code */
      ans+=(a/c);
    }
    else
    {
      ans+=(a/c)+1;
    }
    temp=ans;
    if (b%d==0) {
      /* code */
      ans+=(b/d);
    }
    else
    {
      ans+=(b/d)+1;
    }
    if (ans>k) {
      /* code */
      cout<<-1<<"\n";
    }
    else
    {
      cout<<temp<<" "<<(k-temp)<<"\n";
    }
  }
  return 0;
}
