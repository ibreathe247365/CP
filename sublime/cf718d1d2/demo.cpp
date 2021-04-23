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
		ll n;
		cin>>n;
		if (n%2050!=0)
		{
			cout<<-1<<"\n";
			continue;
		}		
		ll rem=n/2050,c=0;
		while(rem>0){
			c+=rem%10;
			rem /=10;
		}
		cout<<c<<"\n";
	}

	return 0;
}