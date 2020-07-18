#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  ll n;
  cin>>n;
  double a[n][3];
  bool a2[n];
  memset(a2,false,n);

  for(ll i=0;i<n;i++)
  {
    cin>>a[i][0]>>a[i][1]>>a[i][2];

  }
  for(ll i=0;i<n;i++)
  {
    if(a2[i]==false)
    {
      vector<pair<double,pair<ll,ll> > > v;
      for(ll j=0;j<n;j++)
      {
        if(i!=j)
        {
          if(a2[j]==false)
          {
            double dist=(double)pow((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1])+(a[i][2]-a[j][2])*(a[i][2]-a[j][2]),0.5);

            v.push_back(make_pair(dist,make_pair(i,j)));
          }
        }
      }
      sort(v.begin(),v.end());
      a2[v[0].second.first]=true;
      a2[v[0].second.second]=true;
      cout<<v[0].second.first+1<<" "<<v[0].second.second+1<<"\n";
    }
  }

}
