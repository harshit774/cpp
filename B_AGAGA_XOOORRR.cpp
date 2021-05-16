#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;


int minCost(ll A[], ll n)
{
    // Initialize cost to 0
    int cost = 0;
  
    // Sort the array
    sort(A, A + n);
  
    // Middle element
    int K = A[n / 2];
  
    // Find Cost
    for (int i = 0; i < n; ++i)
        cost += abs(A[i] - K);

    if (n % 2 == 0) {
        int tempCost = 0;
  
        K = A[(n / 2) - 1];
  
        // Find cost again
        for (int i = 0; i < n; ++i)
            tempCost += abs(A[i] - K);
  
        // Take minimum of two cost
        cost = min(cost, tempCost);
    }
  
    // Return total cost
    return cost;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(minCost(a,n)%2==0) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney