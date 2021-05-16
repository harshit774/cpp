#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define INF 0x3f3f3f3f
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
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=INF,x,y;
	for(int i=0;i<n;i++)
	{
		if(ans>abs(a[i]-a[i-1]))
		{
			ans=abs(a[i]-a[i-1]);
			x=i-1;
			y=i;
		}
	}
	if(ans>abs(a[n-1]-a[0]))
	{
		x=n-1;
		y=0;
	}
    cout<< x+1 << " " << y+1;
}
return 0;
}