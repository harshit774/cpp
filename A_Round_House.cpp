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
    ll n,a,b;cin>>n>>a>>b;
    ll ans = ((a-1+b) % n + n) % n + 1;
    cout<< ans <<'\n';
}
return 0;
}