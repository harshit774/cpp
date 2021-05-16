#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const ll mod=1000000007;
vector<ll> g[1000001];
ll A[1000001];
ll B[1000001];
ll con[1000001];
ll a[100001];
ll b[100001];
ll p[100001];
ll h[100001];
ll vis[100001];
vector<ll> S;
priority_queue<pair<ll,ll>> pq;
ll n,s;
ll Temp;
void code1(ll SUP,ll d)
{
    vis[SUP]++;
    h[SUP]=d;
    bool ok=true;
    for(ll CHD:g[SUP])
    {
        if(!vis[CHD])
        {
            p[CHD]=SUP;
            code1(CHD,d+1);
            ok=false;
        }
    }
    if(ok==true)
        pq.push({d,SUP});
}
void done()
{
    for(ll i=0;i<n+1;i++)
    {
        g[i].clear();
        a[i]=0;
        b[i]=0;
        p[i]=0;
        h[i]=0;
    }
    while(!pq.empty())
        pq.pop();
}
void clean(ll SUP)
{
    con[a[SUP]]=0;
    con[b[SUP]]=0;
    A[a[SUP]]=0;
    A[b[SUP]]=0;
    B[a[SUP]]=0;
    B[b[SUP]]=0;
}
int code2(ll SUP)
{
    B[b[SUP]]++;
    A[a[SUP]]++;
    if(A[a[SUP]]==B[a[SUP]] and con[a[SUP]]!=0)
    {
        con[a[SUP]]--;
        Temp--;
    }
    else if(con[a[SUP]]==0)
    {
        con[a[SUP]]++;
        Temp++;
    }
    if(A[b[SUP]]==B[b[SUP]] and con[b[SUP]]!=0)
    {
        con[b[SUP]]--;
        Temp--;
    }
    else if(con[b[SUP]]==0)
    {
        con[b[SUP]]++;
        Temp++;
    }
    vis[SUP]++;
    S.push_back(SUP);
    if(Temp==0)
    {
        if(vis[p[SUP]]==0 and SUP!=1)
        {
            pq.push(make_pair(h[p[SUP]],p[SUP]));
        }
        clean(SUP);
        return 1;
    }
    if(SUP==1)
    {
        clean(SUP);
        return 0;
    }
    if(vis[p[SUP]]==0)
    {
        if(code2(p[SUP])==1)
        {
            clean(SUP);
            return 1;
        }
    }
    clean(SUP);
    return 0;
}
int sol()
{
    cin>>n>>s;
    for(ll i=0;i<n-1;i++)
    {
        ll u,v;cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(ll i=1;i<n+1;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<n+1;i++)
    {
        cin>>b[i];
    }
    for(ll i=1;i<n+1;i++)
    {
        //cin>>a[i];
        vis[i]=0;
        p[i]=0;
        h[i]=0;
    }
    code1(1,1);
    for(ll i=1;i<n+1;i++)
        vis[i]=0;
    bool correct=true;
    vector<vector<ll>> sets;
    while(!pq.empty())
    {
        pair<ll,ll> leaf = pq.top();
        pq.pop();
        if(vis[leaf.second]==0)
        {
            Temp=0;
            S.clear();
            if(code2(leaf.second)==0)
            {
                correct=false;break;
            }
            else {sets.push_back(S);}
        }
    }
    if(correct==false)
    {
        cout<< 0 <<'\n';
        return 0;
    }
    if(s==1)
    {
        cout<< 1 <<'\n';
        return 0;
    }
    ll a=1;
    ll x=sets.size();
    for(ll i=0;i<x;i++)
    {
        ll u=sets[i][0];
        ll l=sets[i][0];
        ll sze=sets[i].size();
        for(ll j=1;j<sze;j++)
        {
            if(h[sets[i][j]]>h[l])
                l=sets[i][j];
            if(h[sets[i][j]]<h[u])
                u=sets[i][j];
        }
        ll cnt=0;
        for(ll c:g[l])
        {
            if(c!=p[l])
                cnt++;
        }
        a = (a*(cnt+1))%mod;
    }
    cout<< a <<'\n';
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    sol();
    done();
}
return 0;
}// Code Contributed by Harshit Varshney