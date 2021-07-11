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
int T = 1;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll a[3][3];
    fo(i,0,3){
        fo(j,0,3){
            if(i==1 and j==1) continue;
            cin>>a[i][j];
        }
    }
    ll p1 = a[0][0];
    ll p2 = a[1][0];
    ll p3 = a[0][1];
    ll p4 = a[1][2];
    ll p5 = a[2][1];
    ll p6 = a[2][0];
    ll p7 = a[0][2];
    ll p8 = a[1][1];
    ll p9 = a[2][2];
    map<ll,ll> mp;
    if((p1 + p9)%2==0){
        mp[(p1 + p9)/2]++;
    }
    if((p7 + p6)%2==0){
        mp[(p7 + p6)/2]++;
    }
    if((p2 + p4)%2==0){
        mp[(p2 + p4)/2]++;
    }
    if((p3 + p5)%2==0){
        mp[(p3 + p5)/2]++;
    }
    ll res = 0;
    for(auto i : mp){
        res = max(res,i.second);
    }
    if((p7-p4)==(p4-p9)){
        res++;
    }
    if((p6-p5)==(p5-p9)){
        res++;
    }
    if((p1-p2)==(p2-p6)){
        res++;
    }
    if((p1-p3)==(p3-p7)){
        res++;
    }
    cout<< "Case #" << T++ << ": " << res <<'\n';     
}
return 0;
} //Code Contributed by Harshit Varshney