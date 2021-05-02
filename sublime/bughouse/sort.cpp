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
	std::vector<int> v={4,2,5,3,5,8,3};
	sort(v.begin(), v.end());
	sort(v.rbegin(), v.rend());

	int n=7;
	int a[]={4,2,5,3,5,8,3};
	sort(a,a+n);

	string s="monkey";
	sort(s.begin,s.end);

	std::vector<pair<int,int>> v;
	v.push_back({1,5});
	v.push_back({2,3});
	v.push_back({1,2});
	sort(v.begin(),v.end());

	std::vector<tuple<int,int,int>> v;
	v.push_back({2,1,4});
	v.push_back({1,5,3});
	v.push_back({2,1,3});
	sort(v.begin(),v.end());

	return 0;
}