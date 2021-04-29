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
	 // ios_base::sync_with_stdio(false);
  //   cin.tie(nullptr);
  //   cout.tie(nullptr);
	//     cout << a + b << '\n';
    int n;
	cin>>n;
	ll a[n],b[n];
	for (int i = 0; i < n; ++i)
	{	
		int num;
		cin>>num;
		a[i]=num;
	}
	for (int i = 0; i < n; ++i)
		{	
			int num;
			cin>>num;
			b[i]=num;
		}
	ll maxprod=1,arr[n]={};
	for (int mask = 0; mask < (1<n); ++mask)
	{
		ll prod=0,index=0;
		for (int i = 0; i < n; ++i)
		{
			if (mask&(1<<i))
			{
				arr[index]=i;
				index++;
			}
			else{
				prod +=a[i]*b[i];
			}

			for (int f = 0; f < index; ++f)
			{
				prod+=a[arr[index-1-f]]*b[arr[f]];
				// cout<<arr[f];
			}

		}
		for (int f = 0; f < index; ++f)
			{
				// prod+=a[arr[index-1-f]]*b[arr[f]];
				cout<<arr[f];
			}

		maxprod=max(maxprod,prod);
	}
	cout<<maxprod<<"\n";
	return 0;
}