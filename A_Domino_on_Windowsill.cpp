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
ll t;cin>>t;
while(t--)
{
    ll n,k1,k2;cin>>n>>k1>>k2;
    ll w,b;cin>>w>>b;
    //cout << n << k1 << k2;
    if(2*w <= k1+k2  and 2*b <= (n-k1)+(n-k2)) cout<< "YES" <<'\n';
    else cout << "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney