#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,p,w,d,m;
  cin>>n>>p>>w>>d;
  m=p/w;
    for(int i=0; i<100001;i++)
    {
        ll k=(p-m*w)/d;
        if(m>=0&&k>=0&&m*w+k*d==p&&k+m<=n)
        {
            cout<<m<<' '<<k<<' '<<n-m-k<<"\n";
            return 0;
        }
        m--;
    }
    cout<<-1<<"\n";
  return 0;
}
