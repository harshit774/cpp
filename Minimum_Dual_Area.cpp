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
    ll n;cin>>n;
    vector<pair<ll,ll>> p , q;
    multiset<ll> x , y;
    fo(i,0,n){
        ll a,b;cin>>a>>b;
        p.pb({a,b});
        q.pb({b,a});
        x.insert(a);
        y.insert(b);
    }
    sort(p.begin(),p.end());
    sort(q.begin(),q.end());
    ll h1 = 0 , h2 = 0;
    ll h1mx = 0 , h1mn = LONG_MAX;
    ll area = LONG_MAX;
    fo(i,0,n-1){
        h1mx = max(h1mx,p[i].second);
        h1mn = min(h1mn,p[i].second);
        h1 = h1mx - h1mn;
        auto it = y.find(p[i].second);
        y.erase(it);
        h2 = *y.rbegin() - *y.begin();
        ll newarea = (p[i].first - p[0].first) * h1 + (p[n-1].first - p[i+1].first) * h2;
        area = min(area, newarea);
    }
    ll w1 = 0 , w2 = 0;
    ll w1mx = 0 , w1mn = LONG_MAX;
    //ll area = LONG_MAX;
    fo(i,0,n-1){
        w1mx = max(w1mx, q[i].second);
        w1mn = min(w1mn, q[i].second);
        w1 = w1mx - w1mn;
        auto it = x.find(q[i].second);
        x.erase(it);
        w2 = *x.rbegin() - *x.begin();
        ll newarea = (q[i].first - q[0].first) * w1 + (q[n-1].first - q[i+1].first) * w2;
        area = min(area, newarea);
    }
    if(area==LONG_MAX) area = 0;
    cout<< area <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney