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
    ll a = n*n/2;
    for(ll i=1, j=n*n; i<=a and j>a; i++, j--){
        cout<< i << " " << j <<'\n';
    }
return 0;
}
}