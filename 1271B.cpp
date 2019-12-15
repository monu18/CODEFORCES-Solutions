//mOzis_
/////*31022618*/////
//****//MONU KUMAR\\****//
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc ll t=1; cin>>t; while(t--)
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n";
#define p2(x,y) cout <<x <<" " <<y <<"\n";
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n";
#define nL cout<<"\n";
#define lp(i,l,r) for (long long int i = l; i < r; i++)
#define lpr(i,r,l) for (long long int i = r-1; i >=l ; i--)
#define mem(a,x) memset(a,x,sizeof(a))              //set elements of array to some value
#define pi 3.1415926535897932384626
#define mod 1000000007
#define vi vector<int>
#define vii vector< vector<long long int> >
#define vpi vector< pair<long long int,long long int> >
#define mp(a, b) make_pair(a, b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define siz 256
#define bc(n) __builtin_popcountll(n)
#define leadzero(a) __builtin_clz(a)        // count leading zeroes
#define trailzero(a) __builtin_ctz(a)       // count trailing zeroes
#define bitcount(a) __builtin_popcount(a)   // count set bits
#define lps(v,x) (lower_bound(all(v),x)-v.begin())
#define ups(v,x) (upper_bound(all(v),x)-v.begin())
//#########################################################################################
bool anagram(char *s1, char *s2)
{
	ll count[siz];
    mem(count,0) ;
    ll i;
    for (i = 0; s1[i] && s2[i];  i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    if (s1[i] || s2[i])
    {
      return false;
    }
    lp(i,0,siz)
    {
    	 if (count[i])
    	 {
    	 	 return false;
    	 }
    }
     return true;

}
//###########################################################################################
int find_largest_digit(int n)
{
    int mx = 0 ;
    while(n>0)
    {
        mx = max(mx, n%10) ;
        n/=10 ;
    }
    return mx  ;
}
//###########################################################################################
ll no_of_digits(ll n)
{
    ll ans = 0 ;
    while(n>0)
    {
        ans++ ;
        n/=10 ;
    }
    return ans ;
}
//###########################################################################################
// modulo Multiplication
ll moduloMultiplication(ll  a, ll  b,  ll  zz)
{
    ll res = 0;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res + a) % zz;

        a = (2 * a) % zz;

        b >>= 1;
    }
    return res;
}
//###########################################################################################

ll convert(string s)
{
    bool o = true ;
    ll ans = 0 ;
    for(ll i=0;i<s.length();i++)
    {
        ans = ans*10 + (s[i]-48) ;
    }
    return ans ;
}
//###########################################################################################
//function to calculate a^b under mod...
ll powmod(ll a,ll b, ll modulo)
{
    if(b==0 || a==1) return 1;
    ll half=powmod(a,(b/2),modulo) % modulo;
    ll full = (half*half)%modulo;

    if(b%2) return (full*a)%modulo;
    return full%modulo;
}
//###########################################################################################
//function to calculate inverse modulo under mod...assuming gcd is 1
ll invmod(ll a,ll modulo)
{
    ll check=powmod(a,modulo-2,modulo) %modulo;
    return check;
}
//###########################################################################################

ll max(ll a,ll b)
{
  if (a>b) {
    /* code */
    return a;
  }
  return b;
}
//###########################################################################################
ll min(ll a,ll b)
{
  if (a<b) {
    /* code */
    return a;
  }
  return b;
}
//###########################################################################################
ll min(ll a,int b)
{
	if (a<b) return a;
	return b;
}
//###########################################################################################
ll min(int a,ll b)
{
	if (a<b) return a;
	return b;
}
//###########################################################################################
ll max(ll a,int b)
{
	if (a>b) return a;
	return b;
}
//###########################################################################################
ll max(int a,ll b)
{
	if (a>b) return a;
	return b;
}
//###########################################################################################
ll gcd(ll a,ll b)
{
	if (b==0) return a;
	return gcd(b,a%b);
}
//###########################################################################################
ll lcm(ll a,ll b)
{
	return a/gcd(a,b)*b;
}
//###########################################################################################
void yes()
{
  cout<<"YES"<<"\n";
}
//###########################################################################################
void no()
{
  cout<<"NO"<<"\n";
}
//###########################################################################################
int main()
{
	fast
//	clock_t launch=clock();
ll n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    ll b=0,w=0;
    for (ll i = 0; i < n; i++) {
      /* code */
      st.insert(s[i]);
      if (s[i]=='B') {
        /* code */
        b++;
      }
      else
      {
        w++;
      }
    }
    if (st.size()==1) {
      /* code */
      p1(0)
    }
    else
    {
      if (b%2==1 && w%2==1) {
        /* code */
        p1(-1)
      }
      else
      {
        if (b%2==1 || (b%2==0 && w%2==0)) {
          /* code */
          std::vector<ll> v,v1;
          for (ll i = 0; i < n; i++) {
            /* code */
            if (s[i]=='W') {
              /* code */
              v.push_back(i);
              //p1(i)
            }
          }
          for (ll i = 0; i < v.size(); i+=2) {
            /* code */
            ll count=0;
            ll t1=v[i];
            ll t2=v[i+1];
            for (ll j = t1; j < t2; j++) {
              /* code */
              v1.push_back(v[i]+count+1);
              //cout<<v[i]+count+1<<" ";
              count++;

            }
          }
          p1(v1.size());
          for (ll i = 0; i < v1.size(); i++) {
            /* code */
            cout<<v1[i]<<" ";
          }

        }
        else
        {
        //  p1("vv")
          std::vector<int> v,v1;
          for (ll i = 0; i < s.length(); i++) {
            /* code */
            if (s[i]=='B') {
              /* code */
              // if (i==n-1) {
              //   /* code */
              //   v.push_back(s.length()-1);
              // }
              // else
              // {
              //p1(i)
                v.push_back(i);
            // }

              //p2("v ",v[i])
            }

          }
        //  p1(v.size())
          for (ll i = 0; i < v.size(); i+=2) {
            /* code */
            ll count=0;
            //p2("v ",v[i])
            ll t1=v[i];
            ll t2=v[i+1];
            for (ll j = t1; j < t2; j++) {
              /* code */
              //cout<<v[i]+count+1<<" ";\
            //  p2(v[i],v[i+1])
              v1.push_back(v[i]+count+1);
              count++;
            }
          }
          p1(v1.size());
          for (ll i = 0; i < v1.size(); i++) {
            /* code */
            cout<<v1[i]<<" ";
          }
        }
      }
    }

	//clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////
