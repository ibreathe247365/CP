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

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	//     cout << a + b << '\n';

	// cout<<"all fine";
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin >>n>>x;
		int arr[n];
		ll sum=0;
		for (int i = 0; i < n; ++i)
		{
			int num;
			cin >> num;
			arr[i]=num;
			sum += num;
		}
		if (sum==x)
		{
			cout<<"NO";
			continue;
		}
		cout<<"YES"<<"\n";
		// sort array
		sort(arr, arr + n);
		// int temp;
		sum=0;
		for (int i = 0; i < n; ++i)
		{
			sum += arr[i];
			if (sum==x)
			{
				int temp=arr[i];arr[i]=arr[i+1];arr[i+1]=temp;
			}
			// if (sum==x)
			// {
			// 	cout <<arr[i+1]<<" ";
			// }
			// else if (sum-arr[i]==x)
			// {
			// 	cout<<arr[i-1]<<" ";
			// }
			// else cout<<arr[i]<<" ";

		}
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;

}