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
		ll n,k=0,t;
		cin>>n;
		int c=0;
		t=n;
		// for (c = 63; c >= 1; c--){
		// 	if (n>>c)
		// 	{
		// 		break;
		// 	}
		// }
		while(t){
			c++;
			t /= 2;
		}
		// cout<<c;
		for (int i =c ; i >= 0; i--)
		{

		// 	if (!(n>>i))
		// 	{
		// 		k += 1<<i;
		// 	}
			k += (n>>i)?0:(1<<i);
		}
		
		cout<<k<<"\n";
	}

	return 0;
}