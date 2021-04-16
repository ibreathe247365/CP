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
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		if(n%2!=0||a[0]==0||a[n-1]==0){
			cout<<"NO\n";
			continue;
		}
		else cout<<"YES\n";

		cout<<"(";
		for (int i = 1; i <= n-2; ++i)
		{
			if(i<=n/2-1)cout<<"(";
			else cout<<")";
		}
		cout<<")\n";

		cout<<"(";
		for (int i = 1; i <= n-2; ++i)
		{
			if(i%2!=0)cout<<"(";
			else cout<<")";
		}
		cout<<")\n";
			
	}
	return 0;
}