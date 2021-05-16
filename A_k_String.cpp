#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll k,count=0;cin>>k;
	char ch;
	string s;cin>>s;
	ll n=s.size();
	sort(s.begin(),s.end());
	for(ll i=0;i<s.size();i++)
    {
	    if(i%k==0) ch=s[i];
	    if(s[i]==ch) count++;
	}
	if(n==count and count%k==0)
    {
	    for(ll i=0;i<k;i++)
        {
	        for(ll n=0;n<s.size();n+=k)
            {
	            cout<<s[n];
	        }
	    }
	}
    else cout<<-1;

}
return 0;
}