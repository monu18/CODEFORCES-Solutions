#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll q;
  cin>>q;
  while (q--) {
    /* code */
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    ll rr=0;
    ll zz=m;
    ll mul=0;
    while ((zz%10)!=0) {
      /* code */
      zz+=m;
      mul+=zz%10;
      rr++;
    }
    ll number_tems=n/m;
    ll vv=m;
    if (n<m) {
      /* code */
      cout<<0<<"\n";
    }
    else
    {
      if (number_tems>10) {
        /* code */
        ans=mul*(number_tems/rr);
        ll bb=number_tems%rr;
        cout<<"number_tems "<<number_tems<<"\n";
        //  cout<<"ans "<<ans<<"\n";
      //  cout<<"bb "<<bb<<"\n";
        while(bb)
        {
          ans+=(vv%10);
          vv+=m;
          bb--;
          cout<<"ans "<<ans<<"\n";
        }

      }
      else
      {
        ll bb=number_tems;
        while(bb)
        {
          ans+=(vv%10);
          vv+=m;
          bb--;
          //cout<<"ans "<<ans<<"\n";
        }
      }
      cout<<ans<<"\n";
    }
  }
  return 0;
}
