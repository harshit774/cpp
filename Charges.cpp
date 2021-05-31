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
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    ll res = 0;
    fo(i,1,n)
    {
        if(s[i]==s[i-1]) 
        {
            res = res + 2;
        }
        else {
            res = res + 1;
        }
    }
    fo(i,0,k)
    {
        ll q;cin>>q;
        q = q - 1;
        if(q-1>=0)
        {
            if(s[q]==s[q-1])
            {
                res = res - 2;
            }
            else {
                res = res - 1;
            }
        }
        if(q+1<n)
        {
            if(s[q]==s[q+1])
            {
                res = res - 2;
            }
            else{
                res = res - 1;
            }
        }
        if(s[q]=='0')
        {
            s[q]='1';
        }
        else{
            s[q]='0';
        }
        if(q-1>=0)
        {
            if(s[q]==s[q-1]) 
            {
                res = res + 2;
            }
            else {
                res = res + 1;
            }
        }
        if(q+1<n)
        {
            if(s[q]==s[q+1])
            {
                res = res + 2;
            }
            else{
                res = res + 1;
            }
        }
        cout<< res <<'\n'; 
    }
}
return 0;
} //Code Contributed by Harshit Varshney