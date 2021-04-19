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
	//     cout << a + b << '\n';


	ll n;
	cin>>n;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{	
		ll num;
		cin >>num;
		a[i]=num;
	}
	sort(a,a+n);
	// cout<<a<<"\n";
	ll sum=0;
	for(ll i=n-1;i>=0;i--){
		sum+=a[n-1]-a[i];
	}
	cout<<sum<<"\n";
	return 0;
}