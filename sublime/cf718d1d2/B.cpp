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
		ll n,m,t;
		cin>>n>>m;
		ll path[m*n],temp[m*n];
		for (int i = 0; i < m*n; ++i)
		{	
			ll num;
			cin>>num;
			path[i]=num;
			temp[i]=num;
		}
		sort(path,path+m*n);
		// for (int i = 0; i < m*n; ++i)
		// {
		// 	cout<<path[i]<<" ";
			
		// 	if ((i+1)%m==0)
		// 		{
		// 			cout<<"\n";
		// 		}	
		// }
		int c=0;
		for (int i = 0; i < m; ++i)
		{	
			// if (i!=0 && path[i]==path[i-1])
			// {
			// 	auto k = lower_bound(temp+c,temp+m*n,path[i])-temp;
			// 	c=k;
			// 	if (k < m*n && temp[k] == path[i]) {
			// 	t=temp[k];temp[k]=temp[k/m*m+i];temp[k/m*m+i]=t;
			// }
			// }
			
			// else{
				auto k = lower_bound(temp,temp+m*n,path[i])-temp;
				if (k < m*n && temp[k] == path[i]) {
					cout<<k;
				// t=temp[k];temp[k]=temp[k/m*m+i];temp[k/m*m+i]=t;
			// }
				
			}

		}
		// for (int i = 0; i < m*n; ++i)
		// {
		// 	cout<<temp[i]<<" ";
			
		// 	if ((i+1)%m==0)
		// 		{
		// 			cout<<"\n";
		// 		}	
		// }
	
	}

	return 0;
}