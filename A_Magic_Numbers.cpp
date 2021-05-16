#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
const int N = 2e3 + 100;
const int mod = 1e9 + 7;

int ss(string n)
{
    for (int i = 0; i < n.size(); i++)
		if (n[i] != '1' && n[i] != '4')
			return false;

	if (n[0] == '4')
		return false;

	if (n.find("444") != n.npos)
		return false;

	return true;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    string s;cin>>s;
    
    if(ss(s)) cout<< "YES" <<'\n';
    else cout<< "NO" <<'\n';

}
return 0;
}