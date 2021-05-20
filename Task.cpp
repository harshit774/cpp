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
    ll L,R;cin>>L>>R;
    ll x=0,y;
    ll count = 0;
    for(ll i=sqrt(L);i<=(R/2)+1;i++)
    {
        if(i*i>=L)
        {
            count = count + sqrt(i*i-L)+1;
            if(i*i>=R)
            {
                x = sqrt(i*i-R);
                if(x*x==i*i-R)
                {
                    count = count - x;
                }
                else count = count - x-1;
            }
        }
    }
    cout<< count <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney