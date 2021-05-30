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
		int n,num=0;
		cin>>n;
		int digits=floor(log10(n)+1);
		for (int j = 1; j <=digits; ++j)
		{
			num=num*10+1;	
		}
		int i=n/num;
		int req=(digits-1)*9+i;
		cout<<req<<"\n";
		
	}

	return 0;
}