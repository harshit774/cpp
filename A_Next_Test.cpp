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
    ll n,x;
    cin>>n;
    int a[3005]={0};
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]=1;
    }
    for(int i=1;i<=n+1;i++)
    {
        if(a[i]==0)
        {
            cout<< i <<'\n';break;
        }
    }   
}
return 0;
}