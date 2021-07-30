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

ll helper(ll W,ll H,ll x1,ll y1,ll x2,ll y2,ll w,ll h){
    ll ans = -1;
    if(w+x2-x1 <= W){
        ans = max((ll)0, w-x1);
        if(ans>=0){
            ans = min(ans,max((ll)0,x2-(W-w)));
        }
        else{
            ans = max(ans,max((ll)0,x2-(W-w)));
        }
    }
    if(h+y2-y1 <= H){
        if(ans>=0){
            ans = min(ans,max((ll)0,h-y1));
        }
        else{
            ans = max(ans,max((ll)0,h-y1));
        }
        if(ans>=0){
            ans = min(ans,max((ll)0,y2-(H-h)));
        }
        else{
           ans = max(ans,max((ll)0,y2-(H-h))); 
        }
    }
    return ans;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll W,H;cin>>W>>H;
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    ll w,h;cin>>w>>h;
    ll ans = helper(W,H,x1,y1,x2,y2,w,h);
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney