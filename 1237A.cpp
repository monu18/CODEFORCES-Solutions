#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

  ll n;
  cin>>n;
  ll a[n];
  ll e=0,o=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
    if (a[i]%2!=0) {
      /* code */
      if (a[i]>0) {
        /* code */
        e++;
      }
      else
      {
        o++;
      }
    }
  }
  ll count1=0,count2=0;
  for (size_t i = 0; i < n; i++) {
    /* code */
    if (a[i]%2==0) {
      /* code */
      cout<<a[i]/2<<"\n";
    }
    else
    {
      if (e==o) {
        /* code */
        cout<<a[i]/2<<"\n";
      }
      else  {
        /* code */
        if (a[i]>0 && count1<e/2) {
          /* code */
          cout<<(a[i]/2)+1<<"\n";
          count1++;
        }
        else if(a[i]>0)
        {
          cout<<(a[i]/2)<<"\n";
        }
        if (a[i]<0 && count2<o/2) {
          /* code */
          cout<<(a[i]/2)-1<<"\n";
          count2++;
        }
        else if(a[i]<0)
        {
          cout<<(a[i]/2)<<"\n";
        }
      }
    }
  }
  return 0;
}
