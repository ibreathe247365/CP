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
		int n;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			int num;
			cin>>num;
			a[i]=num-i;
		}
		sort(a,a+n);
		ll c=1,sum=0;
		for (int i = 1; i < n; ++i)
		{
			if (a[i]==a[i-1])
			{
				c++;
				if (i==n-1)
				{
					sum+=c*(c-1)/2;
				}
			}
			else
			{
				sum += c*(c-1)/2;
				c=1;
			}
		}
		cout<<sum<<"\n";
		
	
	}

	return 0;
}