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
    ll n,k;cin>>n>>k;
    ll c=0;
    string s;
    while(n--)
    {
        cin>>s;
        ll p=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='4' or s[i]=='7') p++;
        }
        if(p<=k) c++;
    }
    cout << c <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney