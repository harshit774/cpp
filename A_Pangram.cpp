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
    ll n;cin>>n;
    string s;cin>>s;
    //cout << pangrams(s);
    int count = 0;

    for(ll i=0;i<n;i++)
    {
        if(s[i]>=65 and s[i]<=90)
        {
            s[i]=97+s[i]-65;
        }
    }
  
    // Sort the string
    sort(s.begin(), s.end());
  
    // Count distinct alphabets
    for (int i = 0; i < n-1; i++) {
        if (s[i] != s[i + 1])
            count++;
    }
    
    // If count is 27 then the string
    // contains all the alphabets
    // including space as a
    // distinct character
    if (count == 25) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';
    
}
return 0;
} //Code Contributed by Harshit Varshney