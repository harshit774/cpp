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
    ll n,m;cin>>n>>m;
    string st;
    vector<vector<ll>> arr(n,vector<ll>(m));
    queue<pair<ll,ll>> q;
    vector<vector<ll>> vis(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++){
        cin>>st;
        for(ll j=0;j<m;j++){
            if(st[j]=='.'){
                arr[i][j]=0;
            }
            else if(st[j]=='R'){
                arr[i][j]=1;
                q.push(make_pair(i,j));
            }
            else{
                arr[i][j]=2;
                q.push(make_pair(i,j));
            }
        }
    }
    if(q.empty()){
        cout<<"YES"<<endl;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if((i+j) & 1){
                    cout<<"R";
                }
                else{
                    cout<<"W";
                }
            }
            cout<<endl;
        }
        return;
    }
    while(!q.empty()){
        auto elem = q.front();
        q.pop();
        ll y=elem.first;
        ll x=elem.second;
        if(vis[y][x]) continue;
        vis[y][x]=1;
        for(ll dy=-1;dy<=1;dy++){
            for(ll dx=-1;dx<=1;dx++){
                if(abs(dy)==abs(dx)) continue;
                ll ny=y+dy;
                ll nx=x+dx;
                if(ny<n && ny>=0 && nx<m && nx>=0 && !vis[ny][nx] && arr[ny][nx]==0){
                    ll tar;
                    if(arr[y][x]==1){
                        tar=2;
                    }
                    else{
                        tar=1;
                    }
                    arr[ny][nx]=tar;
                    q.push(make_pair(ny,nx));
                }
            }
        }
    }
    bool ok=true;
    for(ll i=0;i<n && ok;i++){
        for(ll j=0;j<m && ok;j++){
            if(i-1>=0){
                if(arr[i-1][j]==arr[i][j]){
                    ok=false;
                    break;
                }
            }
            if(i+1<n){
                if(arr[i+1][j]==arr[i][j]){
                    ok=false;
                    break;
                }
            }
            if(j-1>=0){
                if(arr[i][j-1]==arr[i][j]){
                    ok=false;
                    break;
                }
            }
            if(j+1<m){
                if(arr[i][j+1]==arr[i][j]){
                    ok=false;
                    break;
                }
            }
        }
    }
    if(ok){
        cout<< "YES" <<'\n';
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(arr[i][j]==1){
                    cout<< "R";
                }
                else{
                    cout<< "W";
                }
            }
            cout<<'\n';
        }
    }
    else{
        cout<< "NO" <<'\n';
    }
}
return 0;
}//Code Contributed by Harshit Varshney