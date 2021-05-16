#include<iostream>
#include<map>
#include<vector>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll solve(vector<char> u , vector<char> v)
{
    set<char> s(u.begin(),u.end());
    ll tmp=0;
    for(auto x : v)
    {
        if(s.find(x)!=s.end())
        {
            tmp+=1;
        }
    }
    return tmp;
}

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s;
        map<string,vector<char>>m;
        for(ll i=0;i<n;i++)
        {
            cin>>s;
            if(s.length()>0)
            {
                m[s.substr(1)].push_back(s[0]);
            }
        }
        ll ans=0;
        for(auto i : m)
        {
            for(auto j : m)
            {
                if(i.first!=j.first)
                {
                    ll tmp=solve(i.second,j.second);
                    ans+=(i.second.size()-tmp)*(j.second.size()-tmp);
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}