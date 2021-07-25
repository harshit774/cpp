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

void helper(){
    ll n;cin>>n;
    vector<vector<ll>> v(n,vector<ll>(5,0));
    fo(i,0,n){
        fo(j,0,5){
            cin>>v[i][j];
        }
    }
    stack<ll> st;
    fo(i,0,n){
        st.push(i+1);
    }
    while(st.size()>1){
        ll p1 = st.top()-1;
        st.pop();
        ll p2 = st.top()-1;
        st.pop();
        ll c = 0;
        fo(i,0,5){
            if(v[p1][i] < v[p2][i]) {
                c++;
            }
        }
        //c>=3?st.push(p1+1):st.push(p2+1);
        if(c>=3) st.push(p1+1);
        else st.push(p2+1);
    }
    ll tmp = st.top();
    fo(i,0,n){
        if(i!=tmp-1){
            int cnt = 0;
            fo(j,0,5){
                if(v[tmp-1][j] < v[i][j]) cnt++;
            }
            if(cnt<3){
                cout<< -1 <<'\n';
                return;
            }
        }
    }
    cout<< tmp <<'\n';
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    helper();
}
return 0;
} //Code Contributed by Harshit Varshney