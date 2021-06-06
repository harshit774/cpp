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
    set<ll> s;
    vector<ll> v(n);
    fo(i,0,n){
        cin>>v[i];
        s.insert(v[i]);
    }
    queue<ll> q;
    fo(i,1,n){
        fo(j,0,i){
            q.push(abs(v[i]-v[j]));
        }
    }
    while(!q.empty() && s.size()<=300){
        ll x=q.front();
        q.pop();
        if(s.count(x)){
            continue;
        }
        fo(i,0,v.size()){
            q.push(abs(x-v[i]));
        }
        v.pb(x);
        s.insert(x);
    }
    if(s.size()<=300){
        cout<< "YES" <<'\n';
        cout<< s.size() <<'\n';
        for(auto x:s){
            cout<< x << " ";
        }
        cout<<'\n';
    }
    else{
        cout<< "NO" <<'\n';
    }
}

return 0;
} //Code Contributed by Harshit Varshney