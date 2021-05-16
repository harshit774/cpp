#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//   cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll er = 0 , eb = 0 , ord = 0 , ob = 0;
    string s;cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(s[i]=='r') er++;
            else eb++;
        }
        else{
            if(s[i]=='r') ord++;
            else ob++;
        }
    }
    ll ans = min(max(er,ob),max(eb,ord));
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney