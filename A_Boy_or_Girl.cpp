#include<bits/stdc++.h>
#include<algorithm>
#define ll long long int
using namespace std;

int main()
{
    string s;cin>>s;
    ll n=s.size();
    ll count=0;
    sort(s.begin(),s.end());
    for(ll i=0;i<n;i++)
    {
        if(s[i]!=s[i+1]) count++;
    }
    if(count%2==1)cout<< "IGNORE HIM!" <<'\n';
    else cout<< "CHAT WITH HER!" <<'\n';
}