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
ll t;//cin>>t;
while(t--)
{
    string s;cin>>s;
    int n = s.size();
    //sort(s.begin(),s.end());
    map<char,ll> mp;
    fo(i,0,n){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if(it.second>1){
            cout<< it.first <<'\n';
        }
    }
}
return 0;
} //Code Contributed by Harshit Varshney