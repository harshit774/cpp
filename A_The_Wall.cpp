#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

ll gcd(ll a,ll b)
{
    if(b==0){
        return a;
    }
    else return gcd(b,a%b);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll x,y,a,b;cin>>x>>y>>a>>b;
    ll ans = b/((x*y)/gcd(x, y)) - (a-1)/((x*y)/gcd(x, y));
    cout << ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney