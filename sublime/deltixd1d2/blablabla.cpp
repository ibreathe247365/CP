#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define endl "\n"

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

	int t;
	cin>>t;
	for (int p = 0; p < t; ++p)
	{
		ll n,m;
		cin>>n>>m;
		ll a[n][3];
		for (int i = 0; i < n; ++i)
		{
			ll num;
			cin>>num;
			a[i][0]=num;
		}
		for (int i = 0; i < n; ++i)
		{
			char dir;
			cin>>dir;
			a[i][1]=dir=='R'?1:-1;
		}
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = i; j < n; ++j)
			{
				if(a[i][2])continue;
				
			}
		}

		
	
	}

	return 0;
}