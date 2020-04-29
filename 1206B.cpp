#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  ll a[n];
  ll minn=0,pos=0,eq=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
    if (a[i]==0) {
      /* code */
      eq++;
    }
    else if (a[i]>0) {
      /* code */
      pos++;
    }
    else
    {
      minn++;
    }

  }
  ll sum=0;
  sort(a,a+n);
  if (minn%2==0) {
    /* code */
    ll ans=0;
    for (size_t i = 0; i < minn; i++) {
      /* code */
      sum+=abs(-1-a[i]);
    }
    for (size_t i = minn; i < n; i++) {
      /* code */
      sum+=abs(1-a[i]);
    }
      cout<<sum<<"\n";
  }
  else if (minn%2!=0 && eq!=0) {
    /* code */
    for (size_t i = 0; i < minn; i++) {
      /* code */
      sum+=abs(-1-a[i]);
    }
    sum+=1;
    for (size_t i = minn+1; i < n; i++) {
      /* code */
      sum+=abs(1-a[i]);
    }
      cout<<sum<<"\n";

  }
  else
  {
    for (size_t i = 0; i < minn-1; i++) {
      /* code */
      sum+=abs(-1-a[i]);
    }
    
    for (size_t i = minn-1; i < n; i++) {
      /* code */
      sum+=abs(1-a[i]);
    }
    cout<<sum<<"\n";

  }
  return 0;
}
