#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll n;cin>>n;
    int zD = 1;
    int zABC = 0;
    for(ll i = 1; i <= n; i++) 
    {
	    int nzD = zABC * 3LL % mod;
	    int nzABC = (zABC * 2LL + zD) % mod;
	    zD = nzD;
	    zABC = nzABC;
    }
    cout << zD;
}
return 0;
} //Code Contributed by Harshit Varshney