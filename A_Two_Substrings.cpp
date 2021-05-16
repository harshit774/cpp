#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string s;cin>>s;
    ll c=0,N=s.size();
    //ll x=s[]
    for(ll i=0;i<N-1;i++)
    {
        if(s[i]=='A' and s[i+1]=='B')
        {
           for(ll j=i+2;j<N-1;++j)
           {
               if(s[j]=='B' and s[j+1]=='A')
               {
                   cout<<"YES\n";return 0;
               }
           }
        }
        if(s[i]=='B' and s[i+1]=='A')
        {
            
           for(ll j=i+2;j<N-1;++j)
           {
               if(s[j]=='A' and s[j+1]=='B')
               {
                   cout<<"YES\n";return 0;
               }
           }
        }
    }
    cout<<"NO\n";
}