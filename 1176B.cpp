#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    ll a=0,b=0,c=0;
    for (size_t i = 0; i < n; i++) {
      /* code */
      cin>>a[i];
      if (a[i]%3==1) {
        /* code */
        a++;
      }
    }




  return 0;
}
