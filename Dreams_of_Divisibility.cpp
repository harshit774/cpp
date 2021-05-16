#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void mainHelper()
{
    ll n,k;cin>>n>>k;
    ll x;
    ll A[n];for(ll i=0;i<n;++i)cin>>A[i];
    for(ll i=0;i<n;++i)
    {
        x=A[i];
        while(1)
        {
            if(x%k==0)break;
            if(x>20000000000)
            {
                cout<<"NO\n";return;
            }
            

            x = x + x;
        }
    }
    cout<<"YES\n";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;cin>>t;
    while(t--){mainHelper();}exit(0);
	return 0;
}