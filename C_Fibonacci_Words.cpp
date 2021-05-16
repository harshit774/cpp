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
    string s;cin>>s;
	for(int i=2;i<s.size();i++)
	{
		ll a,b,c;
		a=s[i-2]-'A';
		b=s[i-1]-'A';
		c=s[i]-'A';
		if((a+b)%26!=c)
		{
			cout<<"NO"<<'\n';
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
}
