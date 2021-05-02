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
 //    cin.tie(nullptr);
 //    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif


	int t;
	cin>>t;
	for (int p = 0; p < t; ++p)
	{

		int n,m;
		int arr[n];
		cin>>n>>m;
		for (int i = 0; i < n; ++i)
		{
			arr[i]=i+1;
		}

		ll k=0;
		int mask = 0;
		for (; mask < (1<<n); ++mask)
		{
		ll sq=0,sum=0;
		k=0;
		for (int i = 0; i < n; ++i)
		{
			if (mask&(1<<i))
			{	
				k++;
				sum += arr[i];
				sq += arr[i]*arr[i];
			}
		}
		if (sum==n && sq==m)
		{
			break;
		}
		}
		cout<<"ok";
		if (mask==(1<<n))
		{
			cout<< -1 <<"\n";
			continue;
		}
		cout<<k<<"\n";
		for (int i = 0; i < n; ++i)
		{
			if (mask & (1<<i))
			{	
				cout<<arr[i]<<" ";
			}
		}
		cout<<"\n";
		
	}
	return 0;

}