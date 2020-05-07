#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,m;
  cin>>n>>m;
  if (m>n) {
    /* code */
    cout<<-1;
  }
  else
  {
    if (n/2<=m && n%2==0) {
      /* code */
      cout<<m;
    }

    else
    {
      // if (ceil(n/2)%m==0 ) {
      //   /* code */
      //   cout<<(ceil(n/2)/m)*m;
      //   return 0;
      // }
      cout<<ceil(ceil((double)n/2)/m)*m;

    }
  }
  return 0;
}
