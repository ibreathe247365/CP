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

	if((n&1)!=0||s[0]=='0'||s[n-1]='1'){
		cout <<"NO"<<"\n";
		continue;
	}
	int c1=0,c0=0;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='1')++c1;
		else ++c0;
	}
	if(c1%2==1||c0%2==1){
		cout<<"NO\n";
		continue;
	}
	cout<<"YES\n";
	string a="",b="";
	int count1=1,count2=0;
	for (int i = 0; i < n; ++i)
	{
		if (s[i]=='1')
		
		{
			if (count1<=c1/2)
			{
				a+='(';
				b+='(';
			}
			else{
				a+=')';
				b+=')';
			}

		}
		else{
			if (count2==0)
			{
				a+='(';
				b+=')';
			}
			else{
				a+=')';
				b+='(';
			}
			count2 ^=1;
		}
	}
	cout<<a<<"\n"<<b<<"\n";

}
	return 0;
}