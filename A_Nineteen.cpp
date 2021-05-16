#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    string s;cin>>s;
    string ss = "nineteen";
    ll c = 0;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='n' and s[i+1]=='i' and s[i+2]=='n' and s[i+3]=='e' and s[i+4]=='t' and s[i+5]=='e' and s[i+6]=='e' and s[i+7]=='n')
        {
            c++;
        }
    }
    cout<< c <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney