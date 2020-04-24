#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve()
{
  ll n;
  cin>>n;
  ll a[101];
  a[0]=1;
  for (size_t i = 1; i < 101; i++) {
    /* code */
    a[i]=a[i-1]+4*i;
  }
  cout<<a[n-1]<<"\n";
}//solve
int main(int argc, char const *argv[]) {
  solve();
  return 0;
}
