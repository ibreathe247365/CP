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
		int k,e,w;
		cin>>k;
		e=100-k;
		w=k;
		for (int i = k; i >=1; i--)
		{
			if (e%i==0 && w%i==0)
			{
				e /= i ; w /= i ;
			}
		}
		cout<<e+w<<"\n";

		
	
	}

	return 0;
}