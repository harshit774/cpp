#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(a,b,c) for(int a=b;a<c;a++)
#define ff(a,b,c) for(int a=b;a>=c;a--)
#define pb push_back
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    string s;cin>>s;
    ll sum = 0 , c = 0;
    while(s.size()>1)
    {
        sum = 0;
        fo(i,0,s.size())
        {
            sum+=(s[i]-'0');
        }
        s = to_string(sum);
        c++;
    }
    cout<< c <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney