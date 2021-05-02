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
	int array[]={1,2,3,3,4,5,2,2,2};
	auto r = equal_range(array, array+9, 2);
	cout << r.second-r.first << "\n";


}
auto a = lower_bound(ra, ra+r, i);
auto b = upper_bound(ra, ra+r, i);
cout << b-a << "\n";