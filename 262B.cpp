#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[]) {
  ll n,k;
  cin>>n>>k;
  ll a[n];
  ll ctr=k;
  ll sum1=0;
  ll sum2=0;
  ll neg=0;
  ll b[n];
  for (size_t i = 0; i < n; i++) {
    /* code */
    cin>>a[i];
    if (a[i]<=0) {
      /* code */
      b[i]=a[i]*(-1);
      neg++;
      sum2+=(-1)*a[i];
    }
    else
    {
      sum2+=a[i];
      b[i]=a[i];
    }
    sum1+=a[i];

  }
  if (neg>=k) {
    /* code */
    for (size_t i = 0; i < k; i++) {
      /* code */
      sum1+=((-2)*a[i]);
    }
    cout<<sum1<<"\n";
  }
  else
  {
    sort(b,b+n);
    k-=neg;
    if (k%2==0) {
      /* code */
      cout<<sum2<<"\n";
    }
    else
    {
      cout<<(sum2-2*abs(b[0]))<<"\n";
    }
  }

  return 0;
}
