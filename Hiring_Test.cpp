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
    ll n,m;cin>>n>>m;
    ll x,y;cin>>x>>y;
    while(n--)
    {
        string s;cin>>s;
        ll f=0; ll p=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='F') f++;
            if(s[i]=='P') p++;
        }
        if(f>=x or (f==x-1 and p>=y)) cout<< 1;
        else cout<< 0;
    }
    cout<<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney