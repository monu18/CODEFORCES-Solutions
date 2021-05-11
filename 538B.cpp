#include<bits/stdc++.h>
using namespace std;
#define ll  int
int main(int argc, char const *argv[]) {

  string s;
  cin>>s;

  ll n=s[0]-'0';
  for (size_t i = 0; i < s.length(); i++) {
    n=max(n,s[i]-'0');
  }
  cout<<n<<"\n";

  for(ll i=0;i<n;i++) {
    /* code */
    ll flag=0;
    for (size_t j = 0; j < s.length(); j++) {
      if (i<s[j]-'0') {
        /* code */
        cout<<1;
        flag=1;
      }//if
      else
      {
        if(flag){
          cout<<0;
        }
      }
    }//for
    cout<<" ";
  }//while


  return 0;
}//end main
