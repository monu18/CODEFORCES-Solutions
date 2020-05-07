#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll a[n];
  ll b[1001]={0};
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
    b[a[i]]++;
  }
  ll cc=n;
  std::vector<ll> v;
  while(cc!=0)
  {
    for (size_t i = 1; i < 1001; i++) {
    /* code */
      if(b[i]!=0)
      {
        v.push_back(i);
        b[i]--;
        cc--;
      }
    }
  }
  ll ans=0;
  for (size_t i = 0; i < v.size()-1; i++) {
    /* code */
    if (v[i+1]>v[i]) {
      /* code */
      ans++;
    }
  }
  cout<<ans<<"\n";


  return 0;
}
