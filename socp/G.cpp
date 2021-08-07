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
		int n,num;
		cin>>n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>num;
			a[i]=num;
		}
		int c=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int p=a[i]>a[j]?a[i]:a[j];
				int q=a[i]+a[j]-p;
				p=p%1000;
				q=q%1000;
				int p1=(((p%8)*(p%8))%8),q1=(((q%8)*(q%8))%8);
				int flag=((p1*p1)%8-(q1*q1)%8)%8;
				if (flag==0)
				{
					c++;
				}
			}
		}
		cout<<c<<"\n";
	
	}

	return 0;
}