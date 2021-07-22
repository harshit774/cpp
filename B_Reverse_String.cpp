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

string helper(string s, string t){
    ll n = s.size();
    string rr = s;
    reverse(rr.begin(),rr.end());
    bool ok = false;
    fo(i,0,n){
        string x = "";
        x+=s[i];
        fo(j,0,n){
            string y = x;
            if(i+j<n){
                if(j!=0){
                    y += s.substr(i+1,j);
                }
                int nd = t.size() - y.size();
                if(nd < 0) continue;
                else if(nd==0){
                    if(y==t) ok = true;
                }
                else{
                    int it = n-i-j;
                    if(it==n) continue;
                    if((n-it)>=nd) {
                        y += rr.substr(it,nd);
                    }
                    if(y==t) ok = true;
                }
            }
        }
    }
    if(ok) return "YES";
    else {
        return "NO";
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    string s,t;cin>>s>>t;
    string ans = helper(s,t);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney