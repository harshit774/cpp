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
    ll count = 0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='+')
        {
            count++;
        }
        else if(count>0) count--;
    }
    cout<< count <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney