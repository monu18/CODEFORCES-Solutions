#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  if (n%2==1) {
    /* code */
    cout<<0<<'\n';
  }
  else
  {
    ll ans=1;
      for (size_t i = 0; i < (n/2); i++) {
        /* code */
        ans*=2;
      }
      cout<<ans;
  }

  return 0;
}
