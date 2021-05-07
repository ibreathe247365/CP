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
	string s;
	cin>>s;
	bool changeright1=false;
	bool changeright2=false;
	int c=0;
	int n=s.length();
	// string t=s;

	for (int i = 0; i < n; ++i)
	{
		if (i%2==0)
		{
			if (s[i+2]<s[i] && i==0||s[i-2]==s[i])
			{
				s[i+2]=s[i];
				changeright1=true;
				c++;
			}
			else if (s[i+2]<s[i] && i==0||s[i-2]<s[i])
			{
				if(i!=0)s[i]=min(s[i-2],s[i+2]);
				else s[i]=s[i+2];
				if(!changeright1)c++;
				changeright1=false;
				
			}
		}
		
	}

	reverse(s.begin(), s.end());
	if (n%2==1)
	{
		s.erase (s.begin());
		cout<<s;
	}

	for (int i = 0; i < n; ++i)
	{
		if (i%2==0)
		{
			if (s[i+2]<s[i] && i==0||s[i-2]==s[i])
			{
				s[i+2]=s[i];
				changeright1=true;
				c++;
			}
			else if (s[i+2]<s[i] && i==0||s[i-2]<s[i])
			{
				if(i!=0)s[i]=min(s[i-2],s[i+2]);
				else s[i]=s[i+2];
				if(!changeright1)c++;
				changeright1=false;
				
			}
		}
		
	}

	cout<<c<<"\n";
	return 0;


}