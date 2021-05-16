#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
typedef long long int ll;
//const int N = 2e3 + 100;
const int mod = 1e9 + 7;
void accepted(){
    ll n;cin>>n;
    string s;cin>>s;
    int l = s.size()-1;
    ll i=0;
    int x=0;
    int y=0;
    ll q=0,p=0;
    for(auto i:s)
    {
        if(i=='T')q++;
        if(i=='M')p++;
    }
    if((2*p)==(q))
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
                x++;
            }
            else
            {
                x--;
            }
            if(s[n-i-1]=='T')
            {
                y++;
            }
            else
            {
                y--;
            }
            if(x<0 or y<0)
            {
                cout<< "NO" <<'\n';return;
            }
        }
        cout<< "YES" <<'\n';
    }
    else
    {
        cout<< "NO" <<'\n';
    }

}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;cin>>t;
while(t--)
{
    accepted();
}
return 0;
}//Code Contributed by Harshit Varshney