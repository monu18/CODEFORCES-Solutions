#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  string s1,s2,s3;
  cin>>s1>>s2>>s3;
  int one1=0,one2=0,one3=0;
  for(int i=0;i<10;i++)
  {
    if(s1[i]=='1')
    one1++;
    if(s2[i]=='1')
    one2++;
    if(s3[i]=='1')
    one3++;
  }
  if(one1+one2+one3<=10)
  {
    for(int i=0;i<one1+one2+one3;i++)
    cout<<"1";
    for(int i=0;i<10-(one1+one2+one3);i++)
    cout<<"0";
    cout<<endl;

  }
    else
    {
      int n=10;
      int arr1[10]={0};
      int arr2[10]={0};
      for(int i=0;i<one1;i++)
      arr1[i]=1;
      for(int i=10-1;i>=10-one2;i--)
      arr2[i]=1;
      for(int i=0;i<n;i++)
      {
        if(one3>0)
        {
          if(arr1[i]==arr2[i]&&arr1[i]==1)
          {one3--;
          arr2[i]=0;}
          if(arr1[i]==arr2[i]&&arr1[i]==0)
          {one3--;
          arr2[i]=1;}

        }
      }
      int ones=0;
      for(int i=0;i<n;i++)
      {
        if(arr1[i]^arr2[i]==1)
        ones++;
      }
      ones=ones-one3;
      for(int i=0;i<ones;i++)
      cout<<"1";
      for(int i=0;i<10-ones;i++)
      cout<<"0";
      cout<<endl;
    }
  }
}
