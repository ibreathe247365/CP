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
		string a,b;
		cin>>a>>b;

		if(a==b){
			cout << "YES\n";
			continue;
		}

		int zero=0,one=0;

		for (int i = 0; i < n; ++i)
		{
			if(a[i]=='1')one++;
			else zero++;
		}

		int f=1;
		bool changed =false;
		for (int i = n-1; i >=0; i--)
		{
			if ((a[i]!=b[i]&& !changed)||(a[i]==b[i]&& changed))
			{
				if(zero==one){
					changed=!changed;
				}
				else{
					f=0;
					break;
				}
			}

			if (a[i]=='1')
			{
				one--;	
			}
			else{
				zero--;
			}
		}

		if (f==1)
			{
				cout<<"YES\n";
			}	
		else{
			cout<<"NO\n";
		}

	}

	return 0;
}