#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define fff(i,a,b) for(int i = a; i <= b ; i++)
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
    ll n;cin>>n;
    if(n%4==1) cout<< 1 << " " << 1 <<'\n';
    else if(n%4==2) cout<< 2 << " " << n << " " << 1 <<'\n';
    else if(n%4==3) cout<< 0 <<'\n';
    else if(n%4==0) cout<< 1 << " " << n <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney