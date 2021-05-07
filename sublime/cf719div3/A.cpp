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
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

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
		// char s[n];
		// fgets(s,50,stdin);
		string s;
		cin>>s;
		// cout<<s;
		int a[26]={0},flag=1;
		for (int i = 0; i < n; ++i)
		{
			int index=(int)s[i]-65;
			if (i==0)
			{
				a[index]=1;
				continue;
			}
			if (a[index] && s[i-1]!=s[i])
			{
				flag=0;
				break;
			}
			else{
				a[index]=1;
			}
		}
		if (flag)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	return 0;


}