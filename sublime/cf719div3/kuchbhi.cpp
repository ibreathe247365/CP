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
		ull A,B;
		cin>>A>>B;
		if(A%B==0){
			cout<<"NO"<<"\n";
			continue;
		}
		cout<<"YES"<<"\n";
		for (ull i = 1; i < B; ++i)
		{
			if(A*(i)%B!=0 && A*(B+i)%B!=0){
				cout<<A*(i)<<" "<<A*B<<" "<<A*(B+i)<<"\n";
				break;
			}
			
		}

		
	
	}

	return 0;
}