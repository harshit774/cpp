#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

void helper(ll n, vector<ll> v){
    sort(v.begin(),v.end());
    ll p = v[1]-v[0];
    ll q = v[n-1]-v[n-2];
    ll xx = min(p, q);
    ll idx = -1;
    for(ll i=1;i<n-1;i++){
        if(v[i+1]-v[i]<xx){
            xx = v[i+1]-v[i];
            idx = i;
        }
    }
    vector<ll> sol;
    if(idx == -1){
        if(p<q){
            sol.pb(v[0]);
            for(ll i=2;i<n;i++){
                sol.pb(v[i]);
            }
            sol.pb(v[1]);
        }
        else{
            sol.pb(v[n-2]);
            for(ll i=0;i<n;i++){
                if(i!=n-2){
                    sol.pb(v[i]);
                }
            }
        }
    }
    else{
        sol.pb(v[idx]);
        for(ll i=idx+2;i<n;i++){
            sol.pb(v[i]);
        }
        for(ll i=0;i<idx;i++){
            sol.pb(v[i]);
        }
        sol.pb(v[idx+1]);
    }
    for(ll i=0;i<n;i++){
        cout<< sol[i] << " ";
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll p = v[1]-v[0];
    ll q = v[n-1]-v[n-2];
    ll xx = min(p, q);
    ll idx = -1;
    for(ll i=1;i<n-1;i++){
        if(v[i+1]-v[i]<xx){
            xx = v[i+1]-v[i];
            idx = i;
        }
    }
    vector<ll> sol;
    if(idx == -1){
        if(p<q){
            sol.pb(v[0]);
            for(ll i=2;i<n;i++){
                sol.pb(v[i]);
            }
            sol.pb(v[1]);
        }
        else{
            sol.pb(v[n-2]);
            for(ll i=0;i<n;i++){
                if(i!=n-2){
                    sol.pb(v[i]);
                }
            }
        }
    }
    else{
        sol.pb(v[idx]);
        for(ll i=idx+2;i<n;i++){
            sol.pb(v[i]);
        }
        for(ll i=0;i<idx;i++){
            sol.pb(v[i]);
        }
        sol.pb(v[idx+1]);
    }
    for(ll i=0;i<n;i++){
        cout<< sol[i] << " ";
    }
    cout<< '\n';
    // sort(v.begin(),v.end());
    // ll p = v[1]-v[0];
    // ll q = v[n-1]-v[n-2];
    // ll xx = min(p, q);
    // ll idx = -1;
    // for(ll i=1;i<n-1;i++){
    //     if(v[i+1]-v[i]<xx){
    //         xx = v[i+1]-v[i];
    //         idx = i;
    //     }
    // }
    // vector<ll> sol;
    // if(idx == -1){
    //     if(p<q){
    //         sol.push_back(v[0]);
    //         for(ll i=2;i<n;i++){
    //             sol.push_back(v[i]);
    //         }
    //         sol.push_back(v[1]);
    //     }
    //     else{
    //         sol.push_back(v[n-2]);
    //         for(ll i=0;i<n;i++){
    //             if(i!=n-2){
    //                 sol.push_back(v[i]);
    //             }
    //         }
    //     }
    // }
    // else{
    //     sol.push_back(v[idx]);
    //     for(ll i=idx+2;i<n;i++){
    //         sol.push_back(v[i]);
    //     }
    //     for(ll i=0;i<idx;i++){
    //         sol.push_back(v[i]);
    //     }
    //     sol.push_back(v[idx+1]);
    // }
    // for(ll i=0;i<n;i++){
    //     cout<< sol[i] << " ";
    // }
    // cout<<'\n';
    // ll res = helper(n,v);
    // cout<< res <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney