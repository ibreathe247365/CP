#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod  = 1e9+7;
const ld eps  = 1e-9 ;
const ll maxn = 1e5+1;
const ll inf  = 1e15 ;
const ll minf = -inf ;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	//     cout << a + b << '\n';

	int t;
	cin>>t;
	for (int p = 0; p < t; ++p)
	{
		ll r,b,d,left,packets;
		cin>>r>>b>>d;
		packets=r>=b?b:r;
		left=r>=b?r-b:b-r;
		// if (d==0 && left==0)
		// {
		// 	cout<<"YES";
		// 	continue;
		// }
		if (packets*d>=left)
		{
			cout<<"YES\n";
		}
		else cout<<"NO\n";



	
	}

	return 0;
}