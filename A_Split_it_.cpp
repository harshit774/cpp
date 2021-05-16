#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

// void isPalindrome(string str)
// {
//     // Start from leftmost and rightmost corners of str
//     int l = 0;
//     int h = str.size()-1;
  
//     // Keep comparing characters while they are same
//     while (h > l)
//     {
//         if (str[l++] != str[h--])
//         {
//             cout<< "NO" <<'\n';
//             return;
//         }
//     }
//     cout<< "YES" <<'\n';return;
// }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    ll i;
    //isPalindrome(s);
    bool ok=false;
    for(ll i=0;i<k;i++)
    {
        if(s[i]!=s[n-i-1] or i+1==n-i-1)
        {
            ok=true;
            break;
        }
    }
    if(ok) cout<< "NO" <<'\n';
    else cout<< "YES" <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney