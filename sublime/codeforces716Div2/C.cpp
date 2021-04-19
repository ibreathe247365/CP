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
	int n;
		cin>>n;
		long long a[n];
		for (int j = 0; j < n-1; ++j)
		{	
			a[j]=j+1;
		}
		int flag=0;
		for (int mask = (1 <<n-1)-1; mask >=0; mask--)
		{
			long long prod=1;
			for (int k = 0; k < n-1; ++k)
			{
				if (mask&(1<<k))
				{
					prod =(prod*a[k])%5;
				}

			}
			cout<<prod<<"\n";
			if (prod==1)
			{
				cout<<
				for (int j = 1; j < n; ++j)
				{	
					cout<<a[j]<<" ";
				}
				break;
			}
		}
	return 0;
	}
	

