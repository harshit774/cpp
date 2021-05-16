#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;
  
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    string s,t;cin>>s>>t;
    bool ok=true;
    if(s.size()!=t.size())
    {
        ok=false;
    }
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]!=t[s.size()-i-1]) {
            ok=false;
            break;
        }
    }
    if(ok) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';

}


return 0;
}