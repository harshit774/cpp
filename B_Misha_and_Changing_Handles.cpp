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
    ll Q;cin>>Q;
    map<string,string> M;
    while (Q--)
    {
        string a,b;cin>>a>>b;
        bool ok= true;
        for(auto i: M)
        {
            if(i.second==a)
            {
                M[i.first]=b;ok=false;break;
            }
        }
        if(ok)
        {
            M[a]=b;
        }
        // for(auto i:M)
        // {
        //     cout<<i.first<<' '<<i.second<<'\n';
        // }
        // cout<<"00\n";
    }
    cout<<M.size()<<'\n';
    for(auto i:M)
    {
        cout<<i.first<<' '<<i.second<<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney