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
    vector<ll> a(n);
    fo(i,0,n) cin>>a[i];
    vector<ll> even ;
    vector<ll> odd;
    for(auto it : a){
        if(it&1){
            odd.pb(it);
        }
        else even.pb(it);
    }
    while(even.size()){
        cout<< even[even.size()-1] <<" ";
        even.pop_back();
    }
    while(odd.size()){
        cout<< odd[odd.size()-1] <<" ";
        odd.pop_back();
    }
    cout<<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney