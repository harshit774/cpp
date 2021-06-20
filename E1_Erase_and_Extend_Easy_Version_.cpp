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

int helper(ll n,ll k,string s){
    string tmp;
    for(ll i=0;i<k;i++)tmp+='z';
    string st;
    for(ll i=0;i<n;i++)
    {
        st=s.substr(0,i+1);
        while(st.size()<k)st+= st;
        st = st.substr(0,k);
        tmp=min(tmp,st);
    }
    cout<< tmp <<'\n';  
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    string tmp;
    fo(i,0,k)
        tmp+='z';
    string st;
    fo(i,0,n)
    {
        st=s.substr(0,i+1);
        while(st.size()<k)st+= st;
        st = st.substr(0,k);
        tmp=min(tmp,st);
    }
    cout<< tmp <<'\n';  
    // ll tmp = helper(n,k,s);
    // cout<< tmp <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney