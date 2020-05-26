#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
  int n;
  cin>>n;
  int k;
  cin>>k;


vector<pair<int,int> > v;
for(int i=0;i<n;i++)
{
  int x;
  cin>>x;
  int y=x;
  int j=0;
  while(y>=pow(2,j))
  {
    v.push_back(make_pair(y/pow(2,j),(1000-j)));
    j++;
  }

}
sort(v.begin(),v.end());

int ctr=0;
vector<int> total;
for(int i=0;i<v.size()-1;i++)
{
  if(v[i].first==v[i+1].first)
    {
      ctr++;

    }
    else
    {
      if(ctr>=(k-1))
      {
        int z=0;
        for(int j=i;j>=i-k+1;j--)
        {
          z=z+1000-v[j].second;
      //    cout<<v1[j].first<<" "<<v1[j].second<<endl;
        }
    //    cout<<endl;
        total.push_back(z);
      }
      ctr=0;
    }


}
//cout<<ctr;
if(ctr>=(k-1))
{
  int z=0;
  for(int j=v.size()-1;j>=v.size()-1-k+1;j--)
  {
    z=z+1000-v[j].second;
  //  cout<<v1[j].first<<" "<<v1[j].second<<endl;
  }
  //cout<<endl;
  total.push_back(z);
}

sort(total.begin(),total.end());
cout<<total[0];

}
