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
    ll n,k;cin>>n>>k;
    if(n%2==1){
        cout<< 1 << " " << (n/2) << " " << (n/2) <<'\n';
    }
    else if(n%2==0 and n%4){
        cout<< 2 << " " << (n/2)-1 << " " << (n/2)-1 <<'\n';
    }
    else {
        cout<< n/2 << " " << n/4 << " " << n/4 <<'\n';
    }
}
return 0;
} //Code Contributed by Harshit Varshney