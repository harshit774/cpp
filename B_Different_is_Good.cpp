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
    ll n;cin>>n;
    string s;cin>>s;
    //cout<< s <<'\n';
    // for(ll i=0;i<n;i++)
    // {
    //     if(s[i]>=65 and s[i]<=90)
    //     {
    //         s[i]=97+s[i]-65;
    //     }
    // }
    set<char> st(s.begin(),s.end());
    if(n>26) cout<< -1 <<'\n';
    else cout<< n-st.size() <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney