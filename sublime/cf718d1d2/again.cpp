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
		ll n,m;
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
		int c=0;
		ll t,index,t2;bool flag=true;
		for (int i = 0; i < m*n; ++i)
		{	
			if (path[c]==t2)
			{
				flag=false;
			}
			if (temp[i]==path[c]&&flag==true)
			{
				//swap i wala with i/m*m+c and c++
				index=i/m*m+c;
				t=temp[index];temp[index]=path[c];temp[i]=t;
				c++;
				i=0;
				t2=path[c];

			}

			if (flag==false)
			{
				flag=!flag;
			}

			if (c==m)
			{
				break;
			}
		}

		for (int i = 0; i < m*n; ++i)
		{
			cout<<temp[i]<<" ";
			
			if ((i+1)%m==0)
				{
					cout<<"\n";
				}	
		}

	}
	return 0;
}