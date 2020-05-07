#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll a1,a2;
  cin>>a1>>a2;
  if (a1==1 && a2==1) {
    /* code */
    cout<<0<<"\n";
  }
  else
  {
    ll count=0;
    while(a1>0 && a2>0)
    {
      if (a2>=a1) {
        /* code */
        a1++;
        a2-=2;
        count++;
      }
      else
      {
        a2++;
        a1-=2;
        count++;
      }
    }
    cout<<count<<"\n";
  }
  return 0;
}
