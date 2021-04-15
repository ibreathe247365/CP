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
	//Algorithm 1
	cin >> n;
	int best = 0;
	for (int a = 0; a < n; a++) {
		for (int b = a; b < n; b++) {
		int sum = 0;
		for (int k = a; k <= b; k++) {
			sum += array[k];
		}
		best = max(best,sum);
		}
	}

	cout << best << "\n";

	//Algorithm 2
	int best = 0;
	for (int a = 0; a < n; a++) {
		int sum = 0;
		for (int b = a; b < n; b++) {
		sum += array[b];
		best = max(best,sum);
		}
	}

	cout << best << "\n";

	//Algorithm 3
		int best = 0, sum = 0;
	for (int k = 0; k < n; k++) {
		sum = max(array[k],sum+array[k]);
		best = max(best,sum);
	}

	cout << best << "\n";
	
	
	return 0;
}