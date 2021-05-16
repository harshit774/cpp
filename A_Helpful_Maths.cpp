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
    string s;cin >> s;
    ll i;
    sort(s.begin(), s.end());
    for (i = (s.size() - 1) / 2; i < s.size() - 1; i++)
    {
        cout << s[i] << "+";
    }
    cout << s[i];
}
return 0;
} //Code Contributed by Harshit Varshney