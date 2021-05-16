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
		int n,c=0;
		cin>>n;
		int a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			int num;
			cin>>num;
			a[i]=num;
			if (num==i+1)
			{
				b[i]=1;
				c++;
			}
			else
			{
				b[i]=0;
			}
		}
		if (c==n)
		{
			cout<<0<<"\n";
			// continue;
		}
		else if (b[n-1]==1 || b[0]==1)
		{
			cout<<1<<"\n";
			// continue;
		}
		else if(a[n-1]==1 && a[0]==n)
		{
			cout <<3<<"\n";
		}
		else 
		{
			cout <<2<<"\n";
		}
	
	}

	return 0;
}