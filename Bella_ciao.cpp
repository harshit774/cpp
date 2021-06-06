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
    ll D,d,P,Q;cin>>D>>d>>P>>Q;
    ll sum = 0;
    ll x = (D/d);
    if(D%d==0){
        sum = d*x*P + (Q*(x-1)*(x)*d)/2;
        cout<< sum <<'\n';
    }
    else{
        sum =  (d*x*P) + (Q*(x-1)*(x)*d)/2;
        ll rem = D%d;
        sum += rem*(P+x*Q);
        cout<< sum <<'\n';
    }
    
}
return 0;
} //Code Contributed by Harshit Varshney