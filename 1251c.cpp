#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define p1(x) cout <<x <<"\n"
#define p2(x,y) cout <<x <<" " <<y <<"\n"
#define p3(x,y,z) cout <<x <<" " <<y <<" " <<z <<"\n"
#define nL cout<<"\n"
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
#define siz 256                        //characters are stored using 8 bit and there can be /256 possible characters only in lowercase alphabet
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b)) / gcd((a),(b))
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

//function to calculate a^b under mod...
ll powmod(ll a,ll b, ll modulo)
{
    if(b==0 || a==1) return 1;
    ll half=powmod(a,(b/2),modulo) % modulo;
    ll full = (half*half)%modulo;

    if(b%2) return (full*a)%modulo;
    return full%modulo;
}

//function to calculate inverse modulo under mod...assuming gcd is 1
ll invmod(ll a,ll modulo)
{
    ll check=powmod(a,modulo-2,modulo) %modulo;
    return check;
}
//
// void yes() {cout<<"YES"<<nL;}
// void no() {cout<<"NO"<<nL;}

//###########################################################################################
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	ll t;
	cin>>t;
  clock_t launch=clock();
	while(t--)
	{
		string s;
    cin>>s;
    std::vector<ll> v1,v2;
    for (size_t i = 0; i < s.length(); i++) {
      /* code */
      if ((s[i]-'0')%2==1) {
        /* code */
        v1.push_back(s[i]-'0');
      }
      else
      {
        v2.push_back(s[i]-'0');
      }
    }
    ll maxx=max(v1.size(),v2.size());
    ll minn=min(v1.size(),v2.size());
    ll i=0,j=0;
    ll c2=0;
    if (v1.size()==0) {
      /* code */
      for (size_t h = 0; h < v2.size(); h++) {
        /* code */
        cout<<v2[h];
      }
    }
    else if (v2.size()==0) {
      /* code */
      for (size_t h = 0; h < v1.size(); h++) {
        /* code */
        cout<<v1[h];
      }
    }
    else
    {


    while (1) {
      /* code */
      if (v1[i]>=v2[j]) {
        /* code */
        cout<<v2[j++];
      }
      else
      {
        cout<<v1[i++];
      }
      if (j==v2.size() || i==v1.size()) {
        /* code */
        break;
      }
    }
    if (i==v1.size()) {
      /* code */
      for (size_t k = j; k < v2.size(); k++) {
        /* code */
        cout<<v2[k];
      }
    }
    else
    {
      for (size_t k = i; k < v1.size(); k++) {
        /* code */
        cout<<v1[k];
      }
    }
  }
    nL;

	}

	clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////
