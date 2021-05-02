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

	int t;
	cin>>t;
	while(t--){
		int n,l,r,cost=0,pairings=l>r?(l-r)/2:(r-l)/2;
		cin>>n,l,r;
		int la[l],ra[r];
		for (int i = 0; i < l; ++i)
		{
			int num;cin>>num;
			la[i]=num;
		}for (int i = 0; i < r; ++i)
		{
			int num;cin>>num;
			ra[i]=num;
		}
		sort(la,la+l);
		sort(ra,ra+r);
		int colour_change=l+r;
		for (int i = 1; i <= n; ++i)
		{
			// auto rand1 = equal_range(ra, ra+r, i);int ro=rand1.second-rand1.first;
			// cout<<ro<<" ";
			auto a = lower_bound(ra, ra+r, i);
			auto b = upper_bound(ra, ra+r, i);
			int ro=b-a;
			// auto rand2 = equal_range(la, la+l, i);int lo=rand2.second-rand2.first;
			// cout<<lo+" "<<"\n";
			auto c = lower_bound(la, la+l, i);
			auto d = upper_bound(la, la+l, i);
			int lo=d-c;

			cost+=(max(lo,ro)-min(lo,ro))/2;
			colour_change-=(ro+lo);

		}
		cost+=pairings;
		cost+=colour_change/2;
		cout<<cost<<"\n";




	}
	return 0;


}