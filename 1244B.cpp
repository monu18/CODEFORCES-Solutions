#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll flag=0;
 for (ll i = 0; i < n; i++) {
   /* code */
   if (s[i]=='1') {
     /* code */
     flag=1;
     break;
   }
 }
  if(flag==0)
 {
   cout<<n<<"\n";
 }
 else {
   /* code */

    ll lemin=0;
    ll rimin=0;
    for (ll i = 0; i < s.length(); i++) {
      /* code */
      if (s[i]=='1') {
        /* code */
        lemin=i;
        break;
      }
    }
    for (ll i = s.length()-1; i >=0; i--) {
      /* code */
      if (s[i]=='1') {
        /* code */
        rimin=(n-i-1);
        break;
      }
    }
    //cout<<lemin<<" "<<rimin<<"\n";
    if (lemin==0 || rimin==0) {
      /* code */
      cout<<2*n<<"\n";
    }
    else
    {
      ll temp=min(lemin,rimin);
      cout<<2*(n-temp)<<"\n";
    }
  }

}

  return 0;
}
