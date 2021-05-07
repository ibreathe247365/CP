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
	 // ios_base::sync_with_stdio(false);
  //   cin.tie(nullptr);
  //   cout.tie(nullptr);
	//     cout << a + b << '\n';
	int n,mid,start,end,temp1,temp2;
	cin>>n;
	start=0;end=n-1;
	mid=(start+end)/2;
	while(start!=end){
		if (mid==0 or mid==n-1)
		{
			break;
		}
		cout<<"?"<<mid<<"\n";
		cout.flush();
		cin>>temp1;
		cout<<"?"<<mid-1<<"\n";
		cout.flush();
		cin>>temp2;
		if (temp1<temp2)
		{
			start=mid;
		}
		else
		{
			end=mid;
		}
		mid=(start+end)/2;
	}
	cout<<"!"<<mid+1<<"\n";
	cout.flush();
	return 0;
}