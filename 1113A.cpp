#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,v;
  cin>>n>>v;
  if (v>=(n-1)) {
    /* code */
    cout<<(n-1)<<"\n";
  }
  else
  {
    ll sum=n-1;
    ll cost=0;
    sum-=v;
    cost+=v;
    for (size_t i = 2; i < 1000; i++) {
      /* code */

      if ((sum)>0) {
        /* code */
        sum--;
        cost+=i;
      }

    }
    cout<<cost<<"\n";
  }

  return 0;
}
