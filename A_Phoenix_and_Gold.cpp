#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define fo(i,n) for(int i=0;i<n;i++)
#define cc cout<<'\n';
#define YES cout<< "YES" <<'\n';
#define NO cout<< "NO" <<'\n';
using namespace std;
typedef long long int ll;
const int Z = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,x;cin>>n>>x;
    ll arr[n];
    ll sum = 0;
    fo(i,n) cin>>arr[i] , sum+=arr[i];
    sort(arr,arr+n);
    if(sum==x) NO
    else
    {
        YES
		sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (sum + arr[i]==x)
			{
				swap(arr[i], arr[i + 1]);
			}
			sum += arr[i];
			cout << arr[i] << " ";
		}
		cc;
    }
}
    return 0;
}//Code Contributed by Harshit Varshney