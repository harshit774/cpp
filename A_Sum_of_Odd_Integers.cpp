#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl;
#define NO cout<< 'NO' << endl;
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    if ((k*k)<=n and (n+k)%2==0)
    {
        int val = 1;
        int sum = 0;
        for(int i = 1; i < k; i++)
        {
            //cout << val << " ";
            sum += val;
            val += 2;
        }
        //cout << n - sum << '\n';
        cout<< "YES" <<'\n';
    }
    else cout << "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney
