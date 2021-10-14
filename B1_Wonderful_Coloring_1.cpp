#include<bits/stdc++.h>
#include<iostream>
#define ll long long int
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
    //ll n;cin>>n;
    string s;cin>>s;
    ll c = 0;
    unordered_map<char,ll> mp;
    fo(i,0,s.size()){
        if(mp[s[i]] < 2) mp[s[i]]++ , c++;
    }
    cout<< c/2 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney