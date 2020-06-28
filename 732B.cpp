#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,k;
  cin>>n>>k;
  ll a[n];
  ll sum=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
  }
  sum=0;
  for (size_t i = 0; i < n-1; i++) {
    /* code */
    if (a[i]+a[i+1]<k) {
      /* code */
      sum+=k-(a[i]+a[i+1]);
      a[i+1]=k-a[i];
    }
  }
  cout<<sum<<"\n";
  for (size_t i = 0; i < n; i++) {
    /* code */
    cout<<a[i]<<" ";
  }
  return 0;
}
