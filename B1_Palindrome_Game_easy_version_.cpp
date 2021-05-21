#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define fff(i,a,b) for(int i = a; i <= b ; i++)
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
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    string s;cin>>s;
    ll count = 0;
    fff(i,0,n)
    {
        if(s[i]=='0')
        {
            count++;
        }
    }
    // if(count==n) cout<< "DRAW" <<'\n';
    // count = n - count;
    // if(count&1)
    // {
    //     if(count==1) cout<< "BOB" <<'\n';
    //     else cout<< "ALICE" <<'\n';
    // }
    // else cout<< "BOB" <<'\n';
    if((count&1) and count!=1) cout<< "ALICE" <<'\n';
    else cout<< "BOB" <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney