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
    // cout.tie(nullptr);
	//     cout << a + b << '\n';
    int t=1;
    for (int tt = 0; tt < t; ++tt)
    {
    	ll n;
    	cin>>n;
    	ll i=1,j=n;
    	while(i<=j){
    		ll mid=i+(j-1)/2;
    		ll x,y,z;

    		cout<<"?"<<mid-1<<"\n";
    		cout.flush();
    		cin >>x;

			cout<<"?"<<mid<<"\n";
    		cout.flush();
    		cin >>y;

			cout<<"?"<<mid+1<<"\n";
    		cout.flush();
    		cin >>z;

    		if(y<x && y<z){
    			cout<<"!"<<mid<<endl;
    			cout.flush();
    			break;
    		}
    		if(x<y){
    			j=mid-1;
    		}
    		else{
    			i=mid+1;
    		}


    	}
    }
	

	return 0;
}