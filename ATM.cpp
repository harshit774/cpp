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
ll t=1;//   cin>>t;
while(t--)
{
    ll x;cin>>x;
    double y;cin>>y;
    if(x%5==0)
    {
        if(x+0.5<=y) cout<< y-x-0.5 <<'\n';
        else cout<< y <<'\n';
    }
    else cout<< y <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney