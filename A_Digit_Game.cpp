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
ll t;cin>>t;
while(t--)
{
    ll n,ans;cin>>n;
    string s;cin>>s;
    ll l = s.size();
    if(l%2==0)
    {
        ans = 1;
        for(ll i=1;i<l;i+=2)
        {
            if(s[i]%2==0) ans=2;
        }
    }
    else
	{
		ans = 2;
		for(int i=0;i<l;i+=2)
        {
			if(s[i]%2==1) 
            {
                ans=1;
            }
        }
	}
	cout << ans << '\n'; 
   
    
}
return 0;
} //Code Contributed by Harshit Varshney