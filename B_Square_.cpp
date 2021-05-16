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
    ll a,b,c,d;cin >> a >> b >> c >> d;
	if(a > b) swap(a,b);
	if(c > d) swap(c,d);
	if(b != d || b != a + c) cout << "No" << '\n';
	else cout << "Yes" << '\n';
}
return 0;
} //Code Contributed by Harshit Varshney