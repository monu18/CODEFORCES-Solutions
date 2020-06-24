#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void print(ll zero,ll one, ll n, ll m)
{
    for (size_t i = 0; i < (zero+one); i++) {
      /* code */
      if (n>m) {
        if (i%2==0) {
          cout<<1;
        }
        else
        {
          cout<<0;
        }
      }//if
      else
      {
          if (i%2==0) {
          cout<<0;
        }
        else
        {
          cout<<1;
        }
      }
    }
}
int main(int argc, char const *argv[]) {
  ll n,m;
  cin>>n>>m;
  ll zero=n;
  ll one=m;
  ll flag=0;
  ll fq=1;
  if (n<(n+m)/3 || m<(n+m)/2) {
    cout<<-1;
  }
  else if (n==m) {
    /* code */
    for (size_t i = 0; i < (n+m); i++) {
      /* code */
      if (i%2==0) {
        /* code */
        cout<<0;
      }
      else
      {
        cout<<1;
      }
    }
  }
  else
  {
    for (size_t i = 0; i < n+m; i++) {
      if (one==zero) {
        /* code */
        // if (fq && (n>m)) {
        //   /* code */
        //   cout<<0;
        //   fq=0;
        //   flag=0;
        // }
        // else if ((m>n)) {
        //   /* code */
        // }
        print(zero,one,n,m);
        break;

      }
      else if (one>zero && flag<2) {
        /* code */
        cout<<1;
        flag++;
        one--;
      }

      else
      {
        cout<<0;
        flag=0;
        zero--;
      }

    }
  }
  return 0;
}
