#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int x=0;
        long long int lcm=1;
        long long int i;
        for(i=2;i<=n;i++)
        {
            lcm = ((i) / (__gcd(i,lcm)) * lcm);  
        }
        for(i=1;i<=n;i++)
        {
            x+= __gcd(i,lcm);
        }
        cout<<x<<' '<<lcm<<'\n';
    }
    return 0;
}