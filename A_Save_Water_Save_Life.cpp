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
    ll h,x,y,c;cin>>h>>x>>y>>c;
    ll s = x+floor(y/2);
    //cout<< s <<'\n';
    ll z = h*s;
    if(z<=c) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney