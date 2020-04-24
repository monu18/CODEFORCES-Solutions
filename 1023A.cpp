#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {

  ll n,m;
  cin>>n>>m;
  string s,t;
  cin>>s;
  cin>>t;
  ll dd=0;
  for (size_t i = 0; i < n; i++) {
    if (s[i]=='*') {
      dd=1;
    }
  }
  if (dd==0 && (n!=m)) {
    std::cout << "NO" << '\n';
    return 0;
  }
  if (n-1>m) {
    std::cout << "NO" << '\n';
  }
  else
  {
    ll i=0;
    ll flag1=1,flag2=1;
    ll j=n-1;
    ll k=m-1;
    while (s[i]!='*' && i<(n) && i<(m)) {
      if (s[i]!=t[i]) {
        flag1=0;
        break;
      }
      i++;
      }
      while (s[j]!='*' && j>=0 && k>=0) {
        if (s[j]!=t[k--]) {
          flag2=0;
          break;
        }//if
        j--;
      }//while
      if (flag1&&flag2) {
        std::cout << "YES" << '\n';
      }
      else
      {
        std::cout << "NO" << '\n';
      }
    }

  return 0;
}
