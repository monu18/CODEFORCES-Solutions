#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll s,in,f;
    cin>>s>>in>>f;
    if ((s+f)<=in) {
      /* code */
      cout<<0<<"\n";
    }
    else
  		{
  			if (f==0) {
  				/* code */
  				if (s>in) {
  					/* code */
  					cout<<1<<"\n";
  				}
  				else
  				{
  					cout<<0<<"\n";
  				}
  			}
  			else
  			{
  				ll ans=(s+f+1-in)/2;
  				if (ans>f) {
  					/* code */
  					cout<<f+1<<"\n";
  				}
  				else
  				{
  					cout<<(ans)<<"\n";
  				}

  			}
  		}
  }
  return 0;
}
