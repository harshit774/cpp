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
    ll n;cin>>n;
    ll m = 2*n;
    ll count1 = 0 , count2 = 0;
    ll a[m];
    fo(i,0,m){
        cin>>a[i];
        if(a[i]&1) count2++;
        else count1++;
    }
    if(count1==count2){
        cout<< "Yes" <<'\n'; 
        continue;
    }
    else cout<< "No" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney