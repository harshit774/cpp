#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    vector<pair<ll,ll>> a(4);
    fo(i,0,4){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ll p = a[0].second , q = a[1].second;
    ll s1=min(p,q);
    ll s2=max(p,q);
    if(s1<=1 and s2>=2) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney