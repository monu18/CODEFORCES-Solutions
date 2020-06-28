#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n;
  cin>>n;
  cout<<(n/2)<<"\n";
  if (n%2==0) {
    /* code */
    for (size_t i = 0; i < n/2; i++) {
      /* code */
      cout<<2<<" ";
    }
  }
  else
  {
    for (size_t i = 0; i < n/2; i++) {
      /* code */
      if (i==0) {
        /* code */
        cout<<3<<" ";
      }
      else
      {
        cout<<2<<" ";
      }
    }
  }
  return 0;
}
