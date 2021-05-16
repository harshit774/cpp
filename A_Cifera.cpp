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
    ll k,l;cin>>k>>l;
    ll im=-1;
    while(l%k==0)
    {
        l/=k;
        im++;
    }
    if(im>=0 and l==1) cout<< "YES" <<'\n'<< im <<'\n';
    else cout<< "NO" <<'\n';
   
    
}
return 0;
} //Code Contributed by Harshit Varshney