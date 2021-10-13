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

ll helper(string s){
    int mn = s.size();
    int n = s.size();
    ff(i,n,0){
        if(s[i]=='5'){
            ff(j,i-1,0){
                if(s[j]=='2' or s[j]=='7')
                    mn = min(mn,n-j-2);
            }
        }
        if(s[i]=='0'){
            ff(j,i-1,0){
                if(s[j]=='0' or s[j]=='5')
                    mn = min(mn,n-j-2);
            }
        }
    }
    return mn;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s;cin>>s;
        ll ans = helper(s);
        cout<< ans <<'\n';
    }
    return 0;
}