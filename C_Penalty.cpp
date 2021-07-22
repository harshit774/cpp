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

ll helper(string s){
    ll n = s.size();
    string rr = s;
    ll cnt = 0;
    int sol = n;
    fo(i,0,n){
        if(rr[i]=='1'){
            if(i&1) cnt = cnt - 1;
            else cnt = cnt + 1; 
        }
        else if(rr[i]=='?'){
            if(i%2==0) cnt = cnt + 1;
        }
        ll c = cnt;
        fo(j,i+1,n){
            if(j%2) c -= 1;
        }
        if(c>0){
            sol = min(sol,i+1);
        }
    }
    rr = s;
    cnt = 0;
    fo(i,0,n){
        if(rr[i]=='1'){
            if(i%2) cnt = cnt + 1;
            else cnt = cnt - 1; 
        }
        else if(rr[i]=='?'){
            if(i%2) cnt = cnt + 1;
        }
        ll c = cnt;
        fo(j,i+1,n){
            if(j%2==0) c -= 1;
        }
        if(c>0){
            sol = min(sol,i+1);
        }
    }
    return sol;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    string s;cin>>s;
    ll ans = helper(s);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney