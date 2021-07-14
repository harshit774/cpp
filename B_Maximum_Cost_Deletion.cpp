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

ll helper(ll n,ll a,ll b,string s){
    ll res = 0;
    if(b<0){
        ll p = 0;
        char x = s[0];
        char y = s[0];
        for(auto i : s){
            if(i!=x and i!=y) {
                p++;
            }
            x = i;
        }
        p+=1;
        res = n*a + p*b;
    }
    else{
        res = n*a + n*b;
    }
    return res;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    ll ans = helper(n,a,b,s);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney