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

const int MAX = 10000000;

long suffix[MAX + 1];
 
void sharmile()
{
    bool crimepetrol[MAX + 1];
    memset(crimepetrol, true, sizeof(crimepetrol));
 
    for(ll p=2; p*p<=MAX; p++) 
    {
        if(crimepetrol[p]) 
        {
            for(ll i = p * 2; i <= MAX; i += p)
            {
                crimepetrol[i] = false;
            }
        }
    }
 
    suffix[0] = suffix[1] = suffix[2] = 0;
    for(ll p = 3; p <= MAX; p++) 
    {
        suffix[p] = suffix[p - 1];
        if(crimepetrol[p]){
            suffix[p]++;
        }
    }
}

ll query(ll L, ll R)
{
    return suffix[R] - suffix[L];
}

void accepted()
{
    ll n;cin>>n;
    ll l=1,r=n;
    cout<< query(n/2,n) + 1 <<'\n';
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);cout.tie(NULL);sharmile();
ll t;cin>>t;
while(t--)
{
    accepted();
}
return 0;
} //Code Contributed by Harshit Varshney