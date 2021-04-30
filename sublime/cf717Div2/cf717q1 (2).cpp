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
		cin>>n>>k;
		int a[n];
		for (int j = 0; j < n; ++j)
		{	
			int num;
			cin>>num;
			a[j]=num;

		}
		for (int j = 0; j < n; ++j)
		{	
			if (a[j]<=k)
			{
				k -=a[j];
				a[n-1]+=a[j];
				a[j]=0;

			}
			else
			{
				a[n-1]+=k;
				a[j]-=k;
				k=0;
			}
			cout<<a[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}