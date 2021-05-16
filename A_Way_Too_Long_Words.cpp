#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t=1;//cin>>t;
while(t--)
{
    ll N;cin>>N;
    string s;//cin>>s;
    //int n=s.size();
    while(N--)
    {
        cin>>s;
        if(s.size()>10)
        {
            cout<< s[0] << s.size()-2 << s[s.size()-1] <<'\n';
        }
        else {
            cout<< s <<'\n';
        }
    }
    

}
return 0;
}