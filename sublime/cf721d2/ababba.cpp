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
		int n,zeros=0,a=0,b=0;
		cin>>n;
		char s[n];
		cin>>s;
		for (int i = 0; i < n; ++i)
		{
			if (s[i]=='0')
			{
				zeros++;
			}
		}
		// cout<<zeros;
		// continue;
		// if (zeros%2==0)
		// {
		// 	cout<<"DRAW\n";
		// 	continue;
		// }
		// if (zeros%4==2)
		// {
		// 	cout<<"ALICE\n";
		// }
		// else{
		// 	cout<<"BOB\n";
		// }
		// for (int i = 1; i <= zeros; ++i)
		// 	{
				
		// 	}
		// if (zeros==1)
		// {
		// 		cout<<"BOB\n";
		// 		continue;
		// }

		zeros = zeros%4;
		if (zeros==0)
			{
				cout<<"DRAW\n";
				// continue;
			}
		else
		{
			cout<<"BOB\n";
			
		}
	}

	return 0;
}