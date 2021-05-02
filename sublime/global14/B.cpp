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

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	//     cout << a + b << '\n';
	int t;
	cin>>t;
	while(t--){
		bool flag=false;
		int n;
		cin>>n;
		int sum=1;
		while(sum<=n){
			if (2*sum==n)
			{
				flag=true;
				break;	

			}
			sum *=2;
		}
		if(flag)cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}

	return 0;
}