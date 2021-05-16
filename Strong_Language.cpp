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
    string s;
    cin >> s;
    int count = 0;
    bool ans = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='*'){
            count++;
            if(count == k)
            {
                ans = true;
                break;
            }
        }
        else {
            if(count == k){
                ans = true;
                break;
            }
            count = 0;
        }
    }
    if(ans) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}
return 0;
}