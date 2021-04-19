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
		cin>>n;
		string s="";
		// int a[n];
		for (int i = 0; i < n; ++i)
		{
			// int num;
			// cin>>num;
			
			string num;
			cin>>num;
			if(stoi(num)%2==0)s=num+" "+s;
			else s=s+num+" ";
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		cout<<s<<"\n";

	}
	return 0;
}