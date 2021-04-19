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

static bool isPerfectSquare(ll x)
{
  long left = 1, right = x;
 
  while (left <= right)
  {
    long mid = (left + right) / 2;
 
    // Check if mid is perfect
    // square
    if (mid * mid == x)
    {
      return true;
    }
 
    // Mid is small -> go right to
    // increase mid
    if (mid * mid < x)
    {
      left = mid + 1;
    }
 
    // Mid is large -> to left
    // to decrease mid
    else
    {
      right = mid - 1;
    }
  }
  return false;
}

int main(){ 
	//     cout << a + b << '\n';

	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n;
		cin>>n;
		long long a[n];
		for (int j = 0; j < n; ++j)
		{	
			long long num;
			// scanf("%d",&num);
			cin>>num;
			a[i]=num;
		}
		int flag=0;
		for (int mask = 1; mask < (1 <<n); ++mask)
		{
			long long prod=1;
			// int flag2=0;
			for (int k = 0; k < n; ++k)
			{
				if (mask&(1<<k))
				{
					prod *= a[k];
					// if (a[k]==1)
					// {
					// 	flag2=1;
					// }
				}

			}
			// cout<<prod;
			if (!(isPerfectSquare(prod)))
			{
				flag=1;
				break;
				
			}
		}
		if (flag)
		{
			cout<<"YES\n";
		}
		else cout<<"NO\n";

	}
	return 0;
}