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
ll t;cin>>t;
while(t--)
{
    ll n,a,b;cin>>n>>a>>b;
    ll SAR=0,ANU=0;
    for(ll i=0;i<n;i++)
    {
        string s;cin>>s;
        for(ll i=0;i<n;i++)
        {
            if(s[0]=='E' or s[0]=='Q' or s[0]=='U' or s[0]=='I' or s[0]=='N' or s[0]=='O' or s[0]=='X')
            {
                SAR = SAR + a;
            }
            else{
                ANU = ANU + b;
            }
        }
    }
    if(SAR>ANU) cout<< "SARTHAK" <<'\n';
    else if(SAR<ANU) cout<< "ANURADHA" <<'\n';
    else if(SAR==ANU) cout<< "DRAW" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney