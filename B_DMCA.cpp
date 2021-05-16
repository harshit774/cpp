#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int digitalRoot(string num)
{
    // If num is 0.
    if (num.compare("0") == 0)
        return 0;
  
    // Count sum of digits under mod 9
    int ans = 0;
    for (int i=0; i<num.length(); i++)
        ans = (ans + num[i]-'0') % 9;
  
    // If digit sum is multiple of 9, answer
    // 9, else remainder with 9.
    return (ans == 0)? 9 : ans % 9;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    string n;cin>>n;
    ll ans=digitalRoot(n);
    cout<< ans <<'\n';

return 0;
}