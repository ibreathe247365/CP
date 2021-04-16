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
	for (int tt=0;tt<t;tt++){
		string s;
		cin>>s;
		int f=1;
		for (int i=0;i<s.size();i++){
			if (s[i] !='a')
			{
				f=0;
				break;
			}
		}
		if (f==1)
		{
			cout<<"NO"<<"\n";
		}
		else{
			cout<<"YES"<<"\n";

			string s1=s+'a';
			string s1rev=s1;
			reverse(s1rev.begin(),s1rev.end());
			if (s1==s1rev)
			{
				cout<<'a'+s<<"\n";
			}
			else{
				cout<<s+'a'<<"\n";
			}
		}
	}

	return 0;
}