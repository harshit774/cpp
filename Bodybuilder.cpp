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
    long long int n,r;
    cin>>n>>r;
    long long int a[n],b[n];
    for(long long int i =0;i<n;i++){
        cin>>a[i];   
    }
    for(long long int i =0;i<n;i++){
        cin>>b[i];   
    }
    long long int t = b[0];
    long long int ans = t;
    for(long long int i =1;i<n;i++){
        t -= (a[i]-a[i-1])*r;
        t+=b[i];
        if(t>ans){
            ans = t;
        }
    }
    cout<<ans<<endl;
}
return 0;
} //Code Contributed by Harshit Varshney