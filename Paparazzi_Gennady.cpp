#include<bits/stdc++.h>
#include<cmath>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        //ll h[n];
        vector<pair<ll,ll>> v;
        vector<pair<ll,ll>> p;
        for(int i=0;i<n;i++)
        {
            int s;cin>>s;
            v.push_back({i+1,s});
        }
        if(n==2){
            cout<<"1\n";continue;
        } 
        p.push_back(v[0]);
        p.push_back(v[1]);
        ll ans=1;
        ll sz=p.size();
        for(int i=2;i<n;i++)
        {
            while(p.size()>1)
            {
                double s1=((double)p[sz-1].second - (double)p[sz-2].second)/((double)p[sz-1].first - (double)p[sz-2].first);
                double s2=((double)v[i].second - (double)p[sz-1].second)/((double)v[i].first - (double)p[sz-1].first);
                if(s1<=s2)
                {
                    p.pop_back();
                    sz-=1;
                }
                else{
                    break;
                }
            }
            p.push_back(v[i]);sz+=1;
            ans=max(ans,p[sz-1].first - p[sz-2].first);
        }
        cout<< ans <<'\n';
    }
    return 0;
    //cout<< int(ans) <<endl;
}