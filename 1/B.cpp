#include<bits/stdc++.h>
using namespace std;
int compute_distinct_word(char a[],vector<string>v)
{
  map<char,char>mp1;
  int n=v.size();
  for(int i=0;i<26;i++)
  {
    mp1['a'+i]=a[i];
  }
  map<string,int>mp2;
  for(int i=0;i<n;i++)
  {
    string s;
    for(int j=0;j<v[i].size();j++)
    {
      s+=mp1[v[i][j]];
    }
    mp2[s]++;
  }
  return mp2.size();
}
int main()
{
  char a[26];
  for(int i=0;i<26;i++)
  {
    cin>>a[i];
  }

  string v[4]={"food", "good", "zap", "yap"};

  cout<<compute_distinct_word(a,v,4);



  return 0;
}
