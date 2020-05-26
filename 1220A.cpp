  #include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(int argc, char const *argv[]) {


  ll n;
  cin>>n;
  string s;
  cin>>s;
  ll z=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    if (s[i]=='z') {
      /* code */
      z++;
    }
  }
  ll o=(n-z*4)/3;
  for (size_t i = 0; i < o; i++) {
    /* code */
    cout<<1<< " ";
  }
  for (size_t i = 0; i < z; i++) {
    /* code */
    cout<<0<<" ";
  }
  return 0;
}
