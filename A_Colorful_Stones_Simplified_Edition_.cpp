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
    ll i,j=0;
    string s,s1;cin>>s>>s1;
    for(ll i=0;i<s1.size();i++)
    {
        if(s[j]==s1[i]) j++;
    }
    cout<< j+1 <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney