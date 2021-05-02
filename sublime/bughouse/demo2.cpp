#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define pb push_back
#define rep(i, a, b) for(int i = a; i < b; i++)
#define srtv(a) sort(a.begin(), a.end())

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int t;
    cin >> t;
    while(t--)
    {
        int k, r1, r2, a1, a2;
        cin >> k >> r1 >> r2 >> a1 >> a2;

        int n = lcm(r1, r2);

        int i;
        int z = min(n, k) + max(a1,a2);

        for(i = 0; i <= z; i++)
        {
            if(((i-a1)%r1 == 0) && ((i-a2)%r2 == 0))
            {
                cout << ceil((float)(k-i)/n) << endl;
                break;
            }
        }

        if(i == z+1)
        {
            cout << 0 << endl;
        }
    }
}

else
        {
            if (s[n-1-(i+2)]<s[n-1-i] && s[n-1-(i-2)]==s[n-1-i])
            {
                s[n-1-(i+2)]=s[n-1-i];
                changeright2=true;
                c++;
            }
            else if (s[n-1-(i+2)]<s[n-1-i] && s[n-1-(i-2)]<s[n-1-i])
            {
                s[n-1-i]=min(s[n-1-(i-2)],s[n-1-(i+2)]);
                
                if(!changeright2)c++;
                changeright2=false;
            }
        }