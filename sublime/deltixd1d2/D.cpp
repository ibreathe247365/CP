#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
// #define int long long
const ll mod  = 1e9+7;
const ld eps  = 1e-9 ;
const ll maxn = 1e5+1;
const ll inf  = 1e15 ;
const ll minf = -inf ;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	//     cout << a + b << '\n';

	ll t;
	cin>>t;
	for (ll p = 0; p < t; ++p)
	{
		ll n;
		cin>>n;
		ll a[n];
		for (ll i = 0; i < n; ++i)
		{
			ll num;
			cin>>num;
			a[i]=num-i;
		}
		sort(a,a+n);
		ll c=1,sum=0;
		for (ll i = 1; i < n; ++i)
		{
			if (a[i]==a[i-1])
			{
				c++;
				if (i==n-1)
				{
					sum+=c*(c-1)/2;
				}
			}
			else
			{
				sum += c*(c-1)/2;
				c=1;
			}
		}
		cout<<sum<<"\n";
		
	
	}

	// return 0;
}