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
		ull num,flag=1;
		for (ull i = 1; i < B; ++i)
		{
			for (int j = A; j < i*A*B; j+=A)
			{
			
			if (flag && j%(A*B)!=0 && (A*B*i-j)%(A*B)!=0 && j!=A*B*i-j)
			{
				cout<<"YES"<<"\n";
				cout<<j<<" " <<A*B*i-j<<" " <<A*B*i<<"\n";
				flag=0;
			}
			// if (flag && j%(A*B)!=0 && (A*B*i+j)%(A*B)!=0 && j!=A*B*i)
			// {
			// 	cout<<"YES"<<"\n";
			// 	cout<<j<<" " <<A*B*i<<" " <<A*B*i+j<<"\n";
			// 	flag=0;
			// }


			}
		}
		if (flag)
		{
			cout<<"NO"<<"\n";
		}
		
	
	}

	return 0;
}