//mOzis_
/////*31022618*/////
//****//MONU KUMAR\\****//
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define tc ll t=1; cin>>t; while(t--)
#define ll int
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

int main()
{
	//fast
//	clock_t launch=clock();
	tc
	{
    ll n;
    cin>>n;
    ll zz=0,oo=0,zo=0,oz=0;
		unordered_map<string,ll>mp1,mp2;
    for (size_t i = 0; i < n; i++) {
      /* code */
      string s;
      cin>>s;
		//	ll zero=0,one=0;

				if (s[0]=='0' && s[s.length()-1]=='0') {
					/* code */
					zz++;
				}
				if (s[0]=='0' && s[s.length()-1]=='1') {
					/* code */
					zo++;
					mp1[s]=i;
				}
				if (s[0]=='1' && s[s.length()-1]=='0') {
					/* code */
					oz++;
					mp2[s]=i;
				}
				if (s[0]=='1' && s[s.length()-1]=='1') {
					/* code */
					oo++;
				}
		//	}

    }

    if (oz==0 &&  zo==0  && oo!=0 && zz!=0) {
      /* code */

        p1(-1)


    }
		else
		{
			if (abs(oz-zo)<=1) {
				/* code */
				p1(0)
				nL;
			}
			else
			{
				std::vector<ll> v;
				if (oz>zo) {
					/* code */
					for(auto x=mp2.begin();x!=mp2.end();x++)
					{
						string ss=x->first;
						reverse(ss.begin(),ss.end());
						if (mp1.find(ss)==mp1.end()) {
							/* code */
							v.push_back(x->second);
							oz--;
							zo++;

						}
						if (abs(oz-zo)<=1) {
							/* code */
							break;
						}
					}
					if (abs(oz-zo)<=1) {
						/* code */
						p1(v.size());
						for (size_t i = 0; i < v.size(); i++) {
							/* code */
							cout<<v[i]<<" ";
						}
						nL
					}
					else
					{
						p1(-1)
					}
				}
				else
				{
					for(auto x=mp1.begin();x!=mp1.end();x++)
					{
							string ss=x->first;
						reverse(ss.begin(),ss.end());
						if (mp2.find(ss)==mp2.end()) {
							/* code */
							v.push_back(x->second);
							oz++;
							zo--;

						}
						if (abs(oz-zo)<=1) {
							/* code */
							break;
						}
					}
					if (abs(oz-zo)<=1) {
						/* code */
						p1(v.size());
						for (size_t i = 0; i < v.size(); i++) {
							/* code */
							cout<<v[i]<<" ";
						}
						nL
					}
					else
					{
						p1(-1)
					}

				}


			}
		}



	}//tc

	//clog<<((long double)(clock()-launch)/CLOCKS_PER_SEC)<<"\n";
	return 0;
}
//////////*********************end of program*********************//////////
