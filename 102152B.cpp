#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> initializeDiffArray(vector<ll>& a)
{
    ll n = a.size();

    vector<ll> d(n + 1);

    d[0] = a[0], d[n] = 0;
    for (ll i = 1; i < n; i++)
    {
      d[i] = a[i] - a[i - 1];
    }

    return d;
}

void update(vector<ll>& d, ll l, ll r, ll x,vector<ll>& a)
{
    d[l] += x;
    d[r + 1] -= x;
    for (ll i = 0; i < a.size(); i++) {
          if (i == 0)
              a[i] = d[i];
          else
              a[i] = d[i] + a[i - 1];
      }
}
// void reupdate(vector<ll> &d,vector<ll> &a)
// {
//   for (ll i = 0; i < A.size(); i++) {
//         if (i == 0)
//             a[i] = d[i];
//         else
//             a[i] = d[i] + a[i - 1];
//     }
// }
int main(int argc, char const *argv[]) {
  ll t;
  cin>>t;
  while(t--)
  {
    ll n,m,q;
    cin>>n>>m>>q;
    std::vector<ll> v;
    for (size_t i = 0; i < m; i++) {
      /* code */
      v.push_back(0);
    }
    vector<ll> d = initializeDiffArray(v);
    while (n--)
    {
      ll l,r;
      cin>>l>>r;
      update(d,l-1,r-1,1,v);
    }
    std::vector<ll > mp1;
      std::vector<ll > mp2;
    ll flag=1;
    for (size_t i = 0; i < m; i++) {
      /* code */
      if (v[i]==0 && flag) {
        /* code */
        mp1.push_back(i);
        flag=0;
      }
      if (v[i]==1 && flag==0) {
        /* code */
        mp2.push_back(i-1);
        flag=1;
      }
    }
    std::vector<pair<ll , ll> > vv;
    for (size_t i = 0; i < mp1.size(); i++) {
      /* code */
      vv.push_back(make_pair(mp1[i],mp2[i]));
      //cout<<mp1[i]<<" "<<mp2[i]<<"\n";
    }
    //sort(vv.begin(),vv.end());
    std::vector<ll> check;
    ll maxx=0;
    for (size_t i = 0; i < mp1.size(); i++) {
      /* code */
    //  vv.push_back(make_pair(mp1[i],mp2[i]));
      //cout<<mp1[i]<<" "<<mp2[i]<<"\n";
      check.push_back(vv[i].second-vv[i].first+1);
      maxx=max(maxx,check[i]);
    }
    // for (size_t i = 0; i < mp1.size(); i++) {
    //   /* code */
    // //  cout<<"check "<<check[i]<<" ";
    // }
    // cout<<"\n";
    while(q--)
    {
      ll k;
      cin>>k;
      ll xx=0;
      if (maxx<k) {
        /* code */
        cout<<-1<<" "<<-1<<"\n";
      }
      else
      {
        for (size_t i =  mp1.size()-1; i >=0; i--) {
          /* code */
          if (check[i]>=k) {
            /* code */
            cout<<vv[i].second-k+2<<" "<<vv[i].second+1<<"\n";
            //xx=1;
            break;
          } 

        }
    }

    }
  }
  return 0;
}
