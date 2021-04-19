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
		string s;
		cin>>s;
		int c=0,index=-1;
		for(int i=0;i<=n-1;i++){
			if (s[i]=='M')
			{
				c++;
				index=i;
			}
		}
		// cout<<c<<index;
		if (c==n/3 && (n-1-index==n/3))
		{
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}