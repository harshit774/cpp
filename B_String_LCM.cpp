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
    string s,t;cin>>s>>t;
    string a = s, b=t;
    while(1){
    // if(s.size()>t.size()) cout<< -1 <<'\n';
        if(a.size()==b.size())
        {
            if(a==b)
            {
                cout<< a <<'\n';
            }
            else cout<< -1 <<'\n';
            break;
        }
        if(a.size()<b.size()) a+=s;
        else b+=t;
    }
}
return 0;
} //Code Contributed by Harshit Varshney