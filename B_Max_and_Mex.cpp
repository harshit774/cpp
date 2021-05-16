#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int getMissingNo(int a[], int n)
{
 
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    int a[n];
    for(ll i=0;i<n;i++) {cin>>a[i];}
    ll mx=a[0];
    for(ll i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    //cout<< mx <<'\n';
    ll z = getMissingNo(a,n);
    ll ans = (mx + z)/2;
    cout<< ans <<'\n';

}
return 0;
} //Code Contributed by Harshit Varshney