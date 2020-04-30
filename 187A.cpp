#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int n;
	cin>>n;
	ll a[n],b[n];
	for(ll i = 0; i < n; i++)
	{
		cin>>b[i];
	}
	for(ll i = 0; i < n; i++)
	{
		cin>>a[i];
	}

	ll j = 0;
	ll ans = 0;
	for(ll i = 0; i < n; i++)
	{
		if(a[i] == b[j])
		{
			j++;
			continue;
		}
		ans++;
	}
  cout<<ans<<"\n";
	return 0;
}
