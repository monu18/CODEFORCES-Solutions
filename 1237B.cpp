#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  ll n;
  cin>>n;
  ll a[n],b[n];
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
  }
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>b[i];
  }
  map<ll ,ll>m;

  for (size_t i = 0; i < n; i++) {
    /* code */
  //  cin>>b[i];
    m.insert(pair<ll, ll>(b[i], i));
  }
  int count = 0;
        int position = -1;
        for(int i=0;i<n;i++){
            if(position<m[a[i]]){
                count++;
                position=m[a[i]];
            }
        }
        cout<<(n-count);
  return 0;
}
