#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m;
    cin>>n>>m;
    string s,c;
    cin>>s;
    cin>>c;
    string p;
    cin>>p;
    int a[26];
    for (size_t i = 0; i < 26; i++) {
      /* code */
      a[i]=-1;
    //  a[1][i]=-1;
    }
    for (size_t i = 0; i < n; i++) {
      /* code */
      if (a[s[i]-'a']<0) {
        /* code */
        a[s[i]-'a']=c[i]-'0';
      }
      else
      {
        a[s[i]-'a']=min(a[s[i]-'a'],c[i]-'0');
      }

    }
    ll ans=0;
    ll flag=1;
    for (size_t i = 0; i < m; i++) {
      /* code */
      if (a[p[i]-'a']<0) {
        /* code */
        //cout<<-1<<"\n";
        flag=0;
        break;
      }
      else
      {
        ans+=a[p[i]-'a'];
      }
    }
    if (flag) {
      /* code */
        cout<<ans<<"\n";;
    }
    else
    {
      cout<<-1<<"\n";
    }

  }
  return 0;
}
