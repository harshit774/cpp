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

string helper(ll n,string s1,string s2){
    if(s1[0]=='1') return "NO";
    fo(i,1,n-1){
        if(s1[i]!='0' and s2[i]!='0') return "NO";
    }
    if(s2[n-1]=='0') return "YES";
    else return "NO";
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    string s1;cin>>s1;
    string s2;cin>>s2;
    string ans = helper(n,s1,s2);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney