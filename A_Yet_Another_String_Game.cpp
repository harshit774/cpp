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
    string s,ans;cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        if(i%2==0)
        {
            if(s[i]=='a')
            {
                ans.push_back('b');
            }
            else ans.push_back('a');
        }
        else
        {
            if(s[i]=='z') ans.push_back('y');
            else ans.push_back('z');
        }  
    }
    cout<< ans <<'\n';
}
return 0;
} //Code Contributed by Harshit Varshney