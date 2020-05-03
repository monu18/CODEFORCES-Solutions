#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,k;
  cin>>n>>k;
//  string s[n];
ll flag=0;
ll count=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    ll xx=0;
    string s;
    cin>>s;
    for (size_t j = 0; j < s.length(); j++) {
      /* code */
      if (s[j]=='4' || s[j]=='7') {
        /* code */
        xx++;
      }
    }
    if (xx<=k) {
      /* code */
      count++;
    }

  }
  cout<<count<<"\n";

  return 0;
}
