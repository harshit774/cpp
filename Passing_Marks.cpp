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
    ll x,y,z,p,A,B,C;cin>>x>>y>>z>>p>>A>>B>>C;
    ll ans = A + B + C;
    if(A>=x and B>=y and C>=z and ans>=p)
    {
        cout<< "YES" <<'\n';
    }
    else cout<< "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney