#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
#define ll long long int
#define pb push_back
#define fo(i,n) for(int i=0;i<n;i++)
#define ff(i,n) for(int i=n-1;i>=0;i--)
#define YES cout<< 'YES' << endl 
#define NO cout<< 'NO' << endl 
using namespace std;
const int E = 2e3 + 100;
const int mod = 1e9 + 7;

int count_same_digit(int L, int R)
{
    int tmp = 0, ans = 0;
  
    // length of R
    int n = log10(R) + 1;
  
    for (int i = 0; i < n; i++) {
  
        // tmp has all digits as 1
        tmp = tmp * 10 + 1;
  
        // For each multiple
        // of tmp in range 1 to 9,
        // check if it present
        // in range [L, R]
        for (int j = 1; j <= 9; j++) {
  
            if (L <= (tmp * j)
                && (tmp * j) <= R) {
  
                // Increment the required count
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll tmp = 0 , ans = 0;
    if(n<=9) cout<< n <<'\n';
    else
    {
        ll z = log10(n) + 1;
        for(ll i=0;i<z+1;i++)
        {
            tmp*=10;
            tmp++;
            for(ll j=1;j<=9;j++)
            {
                if((tmp*j)<=n) ans++;
            }
        }
        cout<< ans <<'\n';
    }
    
    
}
return 0;
} //Code Contributed by Harshit Varshney