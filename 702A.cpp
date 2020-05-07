#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  ll n;
  cin>>n;
  ll a[n],b[n];
  for (size_t i = 0; i < n; i++) {
    /* code */
    b[i]=1;
  }
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];

  }
  ll kk=0;
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    if (a[i]<a[i+1]) {
      /* code */
      b[kk]++;
    }
    else
    {
      kk++;
    }
  //  cout<<"b[i] "<<b[kk]<<"\n";
  //  cout<<"kk "<<kk<<"\n";

  }
  ll maxx=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    // cout<<b[i]<<" ";
    maxx=max(maxx,b[i]);
  }
  cout<<maxx<<'\n';
}
int main(int argc, char const *argv[]) {
  solve();
  return 0;
}
